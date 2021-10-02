<html lang="en">

<head>
    <title>Sort</title>
    <link rel="stylesheet" href="style.css" type="text/css" />
</head>

<body>
    <form method="get">

        <input type="text" name="value">

        <input type="submit" value="Сортировка">

    </form>

    </input>
    </form>
    <?php
    include "script.php";
    $array = explode(", ", $_GET["value"]);
    quicksort($array);
    echo implode(", ", $array);
    ?>
</body>

</html>