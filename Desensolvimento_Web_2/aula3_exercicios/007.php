<?php
/*
Crie um script que percorra toda a $array, apresentando os valores.
Utilize foreach.
Adapte o código para exibir somente os valores inteiros.
Realize a soma dos números inteiros

Dica: https://www.php.net/manual/en/control-structures.foreach.php
*/ 

$aux;
$soma;

$array = [
    "n1" => 10,
    "n2" => 20,
    "n3" => 30,
    "n4" => 'oi mundo',
];

foreach($array as $value){
    //echo "$value";

    if(gettype($value) == "integer")
    {
        echo "<p>$value</p>";

        $aux = $value;
        $value = $value + $aux;
        $soma = $value;
    }

   

}

    echo "Soma dos números inteiros: $soma";




?>