<?php
/*
Variáveis 
*/

$variavel_1 = 'texto';
// Imprimir o valor a variável e o seu tipo
echo $variavel_1 .PHP_EOL;
echo gettype($variavel_1) .PHP_EOL;

echo '<br>' .PHP_EOL;

$variavel_2 = 123; 
// Imprimir o valor a variável e o seu tipo
echo $variavel_2 .PHP_EOL;
echo gettype($variavel_2) .PHP_EOL;

echo '<br>' .PHP_EOL;

$variavel_3 = 1; 
// Imprimir o valor a variável e o seu tipo
echo $variavel_3 .PHP_EOL;
echo gettype($variavel_3) .PHP_EOL;

echo '<br>' .PHP_EOL;


$array = [
    "foo" => "bar",
    "bar" => "foo",
];
// Imprimir o valor a variável e o seu tipo
var_dump($array) .PHP_EOL;
echo gettype($array);

?>