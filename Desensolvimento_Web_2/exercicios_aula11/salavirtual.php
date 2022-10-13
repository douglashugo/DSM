<?php

class salaVirtual

{
    
    private $turma;
    private $curso;
    private $pessoa;

    public function __construct($curso, $turma){
        $this->pessoa = [];
        $this->curso = $curso;
        $this->turma = $turma; 
    } 

    public function setTurma($turma)
    {
        $this -> turma = $turma;
    }

    public function getTurma()
    {
       return $this -> turma;
    }

    public function setCurso($curso)
    {
        $this -> curso = $curso;
    }

    public function getCurso()
    {
       return $this -> curso;
    }

    public function addPessoa( $nome, $idade, $cpf ) 
	{ 
	    $this->pessoa[] = new Pessoa($nome, $idade, $cpf); 
	} 
	 
	public function getPessoa() 
	{ 
	    return $this->pessoa; 
	}


}




















