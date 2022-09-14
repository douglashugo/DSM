<?php
/*
Crie uma função que demonstre 
 - Passagem por valor.
 - Passagem por referência.

 
*/

$total = 0;

// $variavel com passagem de valor
function part_1($variavel, $valor){
    $variavel += $valor;
}
// $variavel com passagem de referência
function part_2(&$variavel, $valor){
    $variavel += $valor;
}



$a = 10;
part_1($a, 20);
echo $a ." <br>\n";
part_2($a, 20);
echo $a ." <br>\n";




?>