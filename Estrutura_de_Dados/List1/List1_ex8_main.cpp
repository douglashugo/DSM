#include <iostream>
#include <cstdlib>
#include <string.h>
#include <locale>

using namespace std;


int *vetorcrescente(int, int);
int *vetordecrescente(int, int);

int *vetorcrescente(int vetor1[], int auxiliar)
{
	for(int i=0; i<10; i++)
	{
		for(int j=i+1; j<10; j++)
		{
			if(vetor1[i] > vetor1[j])
			{
				auxiliar = vetor1[i];
				vetor1[i] = vetor1[j];
				vetor1[j] = auxiliar;	
			} 
			
		}
	}	
		return vetor1;
}

int *vetordecrescente(int vetor1[], int auxiliar)
{
	for(int i=0; i<10; i++)
	{
		for(int k=i+1; k<10; k++)
		{
			if(vetor1[i] < vetor1[k])
			{
				auxiliar = vetor1[i];
				vetor1[i] = vetor1[k];
				vetor1[k] = auxiliar;
			}
		}
	}
	return vetor1;	
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	int auxiliar;
	int valueopcao, vetor1[10], auxopcao;
	string opcao;	
	
	for(int i=0; i<10; i++)
	{
		cout<<"Posição " << i+1 << ", informe o valor: ";
		cin>>vetor1[i]; 
	}
	
	do
	{
		
	cout<<"\nDeseja ordenar de qual forma, CRESCENTE OU DECRESCENTE: ";
	cin>> opcao;
	
	if(opcao == "CRESCENTE")
	{
		auxopcao = 1;
		valueopcao = 3;
	}
		else if(opcao == "DECRESCENTE")
		{
			auxopcao = 2;
			valueopcao = 3;	
		}	
	
	}while(valueopcao != 3);
	
	switch(auxopcao)
	{
	
		case 1: vetorcrescente(vetor1, auxiliar);	
		
		for(int i=0; i<10; i++)
		{
		cout<< vetor1[i] << endl;
		}
		
		break;
	
		case 2: vetordecrescente(vetor1, auxiliar);
	
		for(int i=0; i<10; i++)
		{
		cout<< vetor1[i] << endl;
		}
		
		break;
		
	}
	
	return 0;
}
