<?php
 


if($_SERVER["REQUEST_METHOD"] == "POST"){
    $cpfsalvo = $_POST['cpf'];
    $nomesalvo = $_POST['username'];
    if(!file_exists("cadastro.txt")){
        $handle = fopen("cadastro.txt", "w");
    }else {
        $handle = fopen("cadastro.txt", "a");
    }

    fwrite($handle, $nomesalvo."\n");
    fwrite($handle, $cpfsalvo."\n");
    fflush($handle);
    fclose($handle);

    header("location: welcome.php");

}
?>
 
<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>Acessar</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        
        body{ font: 14px sans-serif;  }
        .wrapper{ width: 350px; padding: 20px; }
    </style>
</head>
<body>
    <div class="wrapper">
        <h2>Cadastro</h2>
        <p>Favor inserir Nome e CPF.</p>
        <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
            <div class="form-group">
                <label>Nome</label>
                <input type="text" name="username" class="form-control" value="">
                <span class="help-block"></span>
            </div>    
            <div class="form-group">
                <label>CPF</label>
                <input type="text" name="cpf" class="form-control" value="">
                <span class="help-block"></span>
            </div>
            <div class="form-group">
                <input type="submit" class="btn btn-primary" value="Cadastrar">
            </div>
        </form>
    </div>    
</body>
</html>