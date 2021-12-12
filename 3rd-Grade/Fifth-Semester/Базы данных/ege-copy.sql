-- MySQL dump 10.13  Distrib 8.0.27, for Win64 (x86_64)
--
-- Host: localhost    Database: ege
-- ------------------------------------------------------
-- Server version	8.0.27

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `etype`
--

DROP TABLE IF EXISTS `etype`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `etype` (
  `ET_ID` int NOT NULL,
  `ET_Name` varchar(45) NOT NULL,
  PRIMARY KEY (`ET_ID`),
  UNIQUE KEY `ET_ID_UNIQUE` (`ET_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `etype`
--

LOCK TABLES `etype` WRITE;
/*!40000 ALTER TABLE `etype` DISABLE KEYS */;
INSERT INTO `etype` VALUES (1,'устный'),(2,'письменный'),(3,'смешанный'),(4,'тестовый');
/*!40000 ALTER TABLE `etype` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `exams`
--

DROP TABLE IF EXISTS `exams`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `exams` (
  `E_ID` int NOT NULL,
  `E_Name` varchar(45) NOT NULL,
  `E_Points` int NOT NULL,
  `E_Date` datetime NOT NULL,
  `St_ID` int NOT NULL,
  `ET_ID` int NOT NULL,
  `Sc_ID` int NOT NULL,
  `S_ID` int NOT NULL,
  `T_ID` int NOT NULL,
  PRIMARY KEY (`E_ID`,`St_ID`,`ET_ID`,`Sc_ID`,`S_ID`,`T_ID`),
  UNIQUE KEY `E_ID_UNIQUE` (`E_ID`),
  KEY `fk_Exams_Students1_idx` (`St_ID`),
  KEY `fk_Exams_EType1_idx` (`ET_ID`),
  KEY `fk_Exams_Schools1_idx` (`Sc_ID`),
  KEY `fk_Exams_Subjects1_idx` (`S_ID`,`T_ID`),
  CONSTRAINT `fk_Exams_EType1` FOREIGN KEY (`ET_ID`) REFERENCES `etype` (`ET_ID`),
  CONSTRAINT `fk_Exams_Schools1` FOREIGN KEY (`Sc_ID`) REFERENCES `schools` (`Sc_ID`),
  CONSTRAINT `fk_Exams_Students1` FOREIGN KEY (`St_ID`) REFERENCES `students` (`St_ID`),
  CONSTRAINT `fk_Exams_Subjects1` FOREIGN KEY (`S_ID`, `T_ID`) REFERENCES `subjects` (`S_ID`, `T_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `exams`
--

LOCK TABLES `exams` WRITE;
/*!40000 ALTER TABLE `exams` DISABLE KEYS */;
INSERT INTO `exams` VALUES (1,'Информатика ЕГЭ',96,'2021-07-12 09:00:00',4,4,1,1,1),(2,'ОБЖ ЕГЭ',100,'2021-04-25 12:00:00',3,1,2,4,2),(3,'English Exam',88,'2021-06-23 09:00:00',1,3,3,3,3),(4,'Экзамен по биологии',94,'2021-06-05 10:40:00',2,2,4,2,4);
/*!40000 ALTER TABLE `exams` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `schools`
--

DROP TABLE IF EXISTS `schools`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `schools` (
  `Sc_ID` int NOT NULL,
  `Sc_Address` varchar(45) NOT NULL,
  PRIMARY KEY (`Sc_ID`),
  UNIQUE KEY `Sc_ID_UNIQUE` (`Sc_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `schools`
--

LOCK TABLES `schools` WRITE;
/*!40000 ALTER TABLE `schools` DISABLE KEYS */;
INSERT INTO `schools` VALUES (1,'Неглинка, 23'),(2,'Большая улица, 27'),(3,'Учебная улица, 3'),(4,'Академика Усова, 9');
/*!40000 ALTER TABLE `schools` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `students`
--

DROP TABLE IF EXISTS `students`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `students` (
  `St_ID` int NOT NULL,
  `St_Name` varchar(45) NOT NULL,
  `St_Grade` int NOT NULL,
  PRIMARY KEY (`St_ID`),
  UNIQUE KEY `St_ID_UNIQUE` (`St_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `students`
--

LOCK TABLES `students` WRITE;
/*!40000 ALTER TABLE `students` DISABLE KEYS */;
INSERT INTO `students` VALUES (1,'Иван Иванов',4),(2,'Максим Максимов',5),(3,'Петр Петров',3),(4,'Андрей Андреев',4);
/*!40000 ALTER TABLE `students` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stype`
--

DROP TABLE IF EXISTS `stype`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `stype` (
  `ST_ID` int NOT NULL,
  `ST_Name` varchar(45) NOT NULL,
  PRIMARY KEY (`ST_ID`),
  UNIQUE KEY `ST_ID_UNIQUE` (`ST_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stype`
--

LOCK TABLES `stype` WRITE;
/*!40000 ALTER TABLE `stype` DISABLE KEYS */;
INSERT INTO `stype` VALUES (1,'технический'),(2,'филологический'),(3,'прикладной');
/*!40000 ALTER TABLE `stype` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `subjects`
--

DROP TABLE IF EXISTS `subjects`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `subjects` (
  `S_ID` int NOT NULL,
  `S_Name` varchar(45) NOT NULL,
  `T_ID` int NOT NULL,
  `ST_ID` int NOT NULL,
  PRIMARY KEY (`S_ID`,`T_ID`),
  UNIQUE KEY `S_ID_UNIQUE` (`S_ID`),
  KEY `fk_Subjects_Tutor1_idx` (`T_ID`),
  KEY `fk_Subjects_SType1_idx` (`ST_ID`),
  CONSTRAINT `fk_Subjects_SType1` FOREIGN KEY (`ST_ID`) REFERENCES `stype` (`ST_ID`),
  CONSTRAINT `fk_Subjects_Tutor1` FOREIGN KEY (`T_ID`) REFERENCES `tutor` (`T_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `subjects`
--

LOCK TABLES `subjects` WRITE;
/*!40000 ALTER TABLE `subjects` DISABLE KEYS */;
INSERT INTO `subjects` VALUES (1,'Информатика',1,1),(2,'Биология',4,1),(3,'Английский язык',3,2),(4,'ОБЖ',2,3);
/*!40000 ALTER TABLE `subjects` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ttype`
--

DROP TABLE IF EXISTS `ttype`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ttype` (
  `TT_ID` int NOT NULL,
  `TT_Name` varchar(45) NOT NULL,
  PRIMARY KEY (`TT_ID`),
  UNIQUE KEY `TT_ID_UNIQUE` (`TT_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ttype`
--

LOCK TABLES `ttype` WRITE;
/*!40000 ALTER TABLE `ttype` DISABLE KEYS */;
INSERT INTO `ttype` VALUES (1,'учитель'),(2,'профессор'),(3,'репетитор'),(4,'студент');
/*!40000 ALTER TABLE `ttype` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tutor`
--

DROP TABLE IF EXISTS `tutor`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tutor` (
  `T_ID` int NOT NULL,
  `T_Name` varchar(45) NOT NULL,
  `T_Price` int NOT NULL,
  `T_Exp_Years` int NOT NULL,
  `TT_ID` int NOT NULL,
  PRIMARY KEY (`T_ID`),
  UNIQUE KEY `T_Name_UNIQUE` (`T_ID`),
  KEY `fk_Tutor_TType_idx` (`TT_ID`),
  CONSTRAINT `fk_Tutor_TType` FOREIGN KEY (`TT_ID`) REFERENCES `ttype` (`TT_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tutor`
--

LOCK TABLES `tutor` WRITE;
/*!40000 ALTER TABLE `tutor` DISABLE KEYS */;
INSERT INTO `tutor` VALUES (1,'Максим Казаков',4200,16,3),(2,'Денис Умскулин',3900,4,4),(3,'Ангелина Ким',2800,9,1),(4,'Надежда Петрова',2600,12,2);
/*!40000 ALTER TABLE `tutor` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-12-12 22:47:19
