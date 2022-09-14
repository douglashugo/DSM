<?php
define('MAXIMO_DEFINIDO' , 10);
define('MINIMO_DEFINIDO' , 0);    
/*
Faça o cálculo da média simples de 
$nota_1 e $nota_2.
Imprima a média simples.
Imprima a condição:
    Se a média menor ou igual a 4.9, reprovado.
    Se a média entre 5 e 7, recuperação.
    Se a média acima de 7, aprovado.

Crie uma função com o nome calculo_media.
Crie validações na função, para que os parâmetros aceitos estejam 
entre 0 e 10.
Crie constantes para os limites ( 0 e 10 )
*/
$nota_1 = 1;
$nota_2 = 9;

if($nota_1 >= 'MINIMO_DEFINIDO' && $nota_1 <= 'MAXIMO_DEFINIDO' && $nota_2 >= 'MINIMO_DEFINIDO' && $nota_2 <='MAXIMO_DEFINIDO')
{

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

}
else
{
    echo "Insira valores válidos para nota 1 e nota 2, ou seja, entre 0 e 10!!!";
}






?>