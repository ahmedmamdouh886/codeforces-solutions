<?php
    
    $stdin = fopen('php://stdin', 'r');
    $c = intval(fgets($stdin));
    $distance = [];
    $coordinates = [];
    
    for ($i = 0;$i < $c;$i++) {
        $coordinates[] = intval(fgets($stdin));
    }

    for ($j = 0; $j < $c;$j++) {
        
        for ($k = 0;$k < $c;$k++) {
            if( $j != $k ) {
                $distance[$j][] = abs($coordinates[$j] - $coordinates[$k]);
            }
            
        }

    }
    
    foreach($distance as $d) {
        echo min($d) . ' ' . max($d) . PHP_EOL;
    }
    
