<?php
function quicksort (&$array, $l=0, $r=0) {
    if($r === 0) $r = count($array)-1;
    $i = $l;
    $j = $r;
    $x = $array[($l + $r) / 2];
    do {
        while ($array[$i] < $x) $i++;
        while ($array[$j] > $x) $j--;
        if ($i <= $j) {
            if ($array[$i] > $array[$j])
                list($array[$i], $array[$j]) = array($array[$j], $array[$i]);
            $i++;
            $j--;
        }
    } while ($i <= $j);
    if ($i < $r) quicksort ($array, $i, $r);
    if ($j > $l) quicksort ($array, $l, $j);
}
