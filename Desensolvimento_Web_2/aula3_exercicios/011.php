<?php
/*
Faça o cálculo da média simples de 
$nota_1 e $nota_2.
Imprima a média simples.
Imprima a condição:
    Se a média menor ou igual a 4.9, reprovado.
    Se a média entre 5 e 7, recuperação.
    Se a média acima de 7, aprovado.

Crie uma função com o nome calculo_media.
Use tipagem estrita e limite os parâmetros a receber float.
*/

declare(strict_types=1);

$nota_1 = 9;
$nota_2 = 4;

function calculo_media(float $nota_1, float $nota_2): float
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