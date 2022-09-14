<?php
/*
Faça o cálculo da média simples de 
$nota_1 e $nota_2.
Imprima a média simples.
Imprima a condição:
    Se a média menor ou igual a 4.9, reprovado.
    Se a média entre 5 e 7, recuperação.
    Se a média acima de 7, aprovado.
*/

$nota_1 = 10;
$nota_2 = 8;

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