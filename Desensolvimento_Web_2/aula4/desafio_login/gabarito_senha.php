<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Adivinhando a senha</title>
</head>
<body>
<?php
//print_r($_POST);
    $senhacorreta = "123mudar";
    $senhasalva = $_POST['senha'];

    if(isset($_POST['senha']) && $_POST['senha'] == $senhacorreta)
    {
        echo '<br><br>';
        echo 'Senha correta! ';
    }
    else
    {
        echo '<br><br>';
        echo 'Senha incorreta, digite novamente!';
    }

    if(!file_exists("teste.txt")){
        $handle = fopen("teste.txt", "w");
    }else {
        $handle = fopen("teste.txt", "a");
    }

    fwrite($handle, $senhasalva."\n");
    fflush($handle);
    fclose($handle);

    $handle = fopen("teste.txt", "r");
    while (!feof($handle)) {
        $line = fgets($handle);
        echo $line ."<br>";
    }
    fclose($handle);

?>
</body>
</html>