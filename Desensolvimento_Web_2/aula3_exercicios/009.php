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
$nota_1 = 9;
$nota_2 = 4;
$soma = $nota_1 + $nota_2;
$media = $soma/2;

if($media <= 4.9)
{
    echo $media;
    echo " - Reprovado";
    echo '<br>';
}
else if($media > 4.9 && $media < 7.1)
{
    echo '<br>';
    echo $media;
    echo " - Recuperação";
    echo '<br>';
}
else if($media > 7)
{
    echo '<br>';
    echo $media;
    echo " - Aprovado";
}

?>