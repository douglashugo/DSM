<?php
require_once 'pessoa.php'; 
require_once 'salavirtual.php'; 

// criação dos objetos 
$p1 = new salaVirtual('Gestão Empresarial',2); 

// composição 
$p1->addPessoa( 'Eduardo', '35', '777777777' ); 
$p1->addPessoa( 'Mariana', '24', '888888888' ); 
$p1->addPessoa( 'Douglas', '26', '999999999' );
$p1->addPessoa( 'Vitor', '18', '999999999' ); 
$p1->addPessoa( 'Bruno', '20', '999999999' ); 
$p1->addPessoa( 'Renato', '36', '999999999' ); 
$p1->addPessoa( 'Ana', '21', '999999999' ); 
$p1->addPessoa( 'Aline', '19', '999999999' ); 


print 'Sala: ' . $p1->getCurso() . "<br>\n"; 
foreach ($p1->getPessoa() as $p) 
{ 
    print '  Aluno: ' . $p->getNome() . ' - ' . $p->getIdade() . ' - ' . $p->getCPF() . "<br>\n"; 
} 


echo '<br>';


$p1 = new salaVirtual('Desenvolvimento de Software Multiplataforma', 4); 

// composição 
$p1->addPessoa( 'Lucas', '18', '444477777' ); 
$p1->addPessoa( 'Daniel', '22', '888886666' ); 
$p1->addPessoa( 'Leticia', '23', '999991111' );
$p1->addPessoa( 'Douglas', '26', '999999999' );  
$p1->addPessoa( 'João', '21', '999999999' ); 
$p1->addPessoa( 'Fernando', '30', '999999999' ); 
$p1->addPessoa( 'Ramon', '32', '999999999' ); 
$p1->addPessoa( 'Bruna', '22', '999999999' ); 

print 'Sala: ' . $p1->getCurso() . "<br>\n"; 
foreach ($p1->getPessoa() as $p) 
{ 
    print '  Aluno: ' . $p->getNome() . ' - ' . $p->getIdade() . ' - ' . $p->getCPF() . "<br>\n"; 
} 