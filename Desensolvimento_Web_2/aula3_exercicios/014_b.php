<?php
/*
Importar a função criada em 014_a.php para ser utilizada aqui.
*/
$nota_1 = 9;
$nota_2 = 4;
// Calcular chamando a função

$nota_1 = 1;
$nota_2 = 5;
// Calcular chamando a função

$nota_1 = 5;
$nota_2 = 3;
// Calcular chamando a função

function calculo_media(float $nota_1, float $nota_2)
{
    $soma = $nota_1 + $nota_2;
    $media = $soma/2;
    return $media;
}

$result = calculo_media($nota_1,$nota_2);


if($result <= 4.9)
{
    echo $result;
    echo " - Reprovado";
    echo '<br>';
}
else if($result > 4.9 && $result < 7.1)
{
    echo '<br>';
    echo $result;
    echo " - Recuperação";
    echo '<br>';
}
else if($result > 7)
{
    echo '<br>';
    echo $result;
    echo " - Aprovado";
}











?>