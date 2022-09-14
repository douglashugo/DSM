#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>

using namespace std;

struct Ccorrente 
{
	string nome;
	string cpf;
	int valorconta;
		 
};
	
typedef struct Ccorrente function;
	
int main()
{
	setlocale(LC_ALL, "portuguese");
	
	function qtduser[5];
	string auxiliar, auxiliarr;
	int auxiliarrr;

	for(int j=0; j<5; j++)
	{
		cout<< j+1 << " - Nome: ";
		cin>> qtduser[j].nome;
			
		cout<< j+1 << " - CPF: ";
		cin>> qtduser[j].cpf;
			
		cout<< j+1 << " - Valor na conta R$: ";
		cin>> qtduser[j].valorconta;
		
		cout<< endl;
			
	}
	
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{	
			if(qtduser[i].valorconta < qtduser[j].valorconta)
			{
					
				auxiliarrr = qtduser[i].valorconta;
				qtduser[i].valorconta = qtduser[j].valorconta;
				qtduser[j].valorconta = auxiliarrr;
				
				auxiliar = qtduser[i].nome;
				qtduser[i].nome = qtduser[j].nome;
				qtduser[j].nome = auxiliar;
				
				auxiliarr = qtduser[i].cpf;
				qtduser[i].cpf = qtduser[j].cpf;
				qtduser[j].cpf = auxiliarr;	
			
			}
		}
	}
	
	cout<< endl;
	cout<< endl;
	cout<< "----- Clientes organizados de acordo com o valor da conta ----- " << endl;
	cout<< endl;
	
	for(int i=0; i<5; i++)
	{
		cout<< "Nome: " << qtduser[i].nome << endl;
		cout<< "CPF: " << qtduser[i].cpf << endl;
		cout<< "Valor na conta R$: " << qtduser[i].valorconta << endl;
		cout<< endl;
		
	}

	
	return 0;
}
