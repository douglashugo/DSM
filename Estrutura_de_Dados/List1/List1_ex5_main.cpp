#include <iostream>
#include <cstdlib>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main() 
{		
	setlocale(LC_ALL, "portuguese");
	
	char nome1 [50]; //string1
	char nome2 [50]; //string2
	char varr [50]; //string3
	int retorno1, retorno2, retorno3, retorno4;
	
	cout<<"Informe seu nome: ";
	cin>>nome1;
	
	cout<<"\nInforme seu Sobrenome: ";
	cin>>nome2;
	
	retorno1 = strlen(nome1);
	retorno2 = strlen(nome2);
	
	if(retorno1 > retorno2)
	{
		cout<< "\n" << nome1 << " " << nome2;
	}
		else if (retorno1 < retorno2) 
		{
			cout<< "\n" << nome2 << " " << nome1;	
		}	
			else if (retorno1 = retorno2)
			{
				strcpy(varr,nome1);
				strcat(varr,nome2);
				retorno4 = strlen(varr);
					
				cout<< "\nString3: " << varr << ", total de caracteres: " << retorno4 ;
				
			}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
