<?php
switch($_GET['param_name']):
    case 1:
        echo '<svg width="200" height="200" xmlns="http://www.w3.org/2000/svg">
        <rect x="100" y="100" width="200" height="200" fill="purple" />
        </svg>';
        break;
    case 2:
        echo '<svg width="500" height="300" r="10" xmlns="http://www.w3.org/1999/svg">
        <circle cx="100" cy="100" r="50" fill="green" />
        </svg>';
        break;
    case 3:
        echo '<svg width="500" height="300" r="10" xmlns="http://www.w3.org/1999/svg">
        <rect x="100" y="100" width="100" height="300" fill="red" />
        </svg>';
        break;
    endswitch;
