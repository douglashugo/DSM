<?php
/*
Descrubra se $numero é :
 - Divisível por 10
 - Divisível por 3
 - Se não é divisível por nenhum destes 

Imprimir mensagem na tela do número e as condições acima.
*/
$numero = 150;


//$result = $numero / 10 ;
//$result3 = $numero / 3 ;

if($numero % 10 == 0)
{
    echo "É divisivel por 10!!!";
    echo '<br>';
    echo $numero;

if($numero % 3 == 0)
{
    echo '<br>';
    echo "É divisivel por 3!!!";
    echo '<br>';
    echo $numero;
}

}
else if ($numero % 10 != 0 && $numero % 3 != 0)
{
    echo "Não é divisivel por 10 e 3!!!";
}




//echo $result;
//echo '<br>';
//echo $result3;


?>