<?php

class Pessoa
{
    public $nome;
    public $idade;
    public $cpf;

    public function __construct($nome, $idade, $cpf)
    {
    
        $this->nome = $nome;
        $this->idade = $idade;
        $this->cpf = $cpf;

    }

    public function getNome(){
        return $this->nome;
    }
   
    public function getIdade(){
        return $this->idade;
    }

    public function getCPF(){
        return $this->cpf;
    }
}


?>