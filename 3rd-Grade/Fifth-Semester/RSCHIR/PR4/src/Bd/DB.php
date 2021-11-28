<?php

namespace Bd;

use PDO;

class DB
{
    private static $pdo;
    public static function init($config)
    {
        self::$pdo = new PDO("mysql:host={$config['host']};dbname={$config['database']}",
            $config['username'], $config['password']);
        self::$pdo->setAttribute(PDO::ATTR_DEFAULT_FETCH_MODE, PDO::FETCH_OBJ);
    }
    public static function selectOne($query)
    {
        $records = self::select($query);
        return array_shift($records);
    }
    public static function select($query)
    {
        $statement = self::$pdo->query($query);
        return $statement->fetchAll();
    }
	public static function query_user($query)
    {
        $statement = self::$pdo->query($query);
		$statement = self::$pdo->query('SELECT * from users');
        return $statement->fetchAll();
    }
    public static function affectingStatement($query)
    {
        $statement = self::$pdo->query($query);
        return $statement->rowCount();
    }
}