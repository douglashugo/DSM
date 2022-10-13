#include <iostream>
#include <cstdlib>
#include <locale>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;



int main()
{
	setlocale (LC_ALL, "portuguese");
	
	string resposta ;
	int sair, value;
	
	
	cout<<"Por favor, digite SIM ou NAO: ";
	cin>>resposta;
	
	do
	{
		cout<<"\nPor favor, digite SIM ou NAO: ";
		cin>>resposta;
		 
		if(resposta == "SIM")
		{
			sair = 3;
			value = 1;
		
			cout<< value <<endl;
		}
			if(resposta == "NAO")
			{
				sair = 3;
				value = 0;
				
				cout<< value <<endl;
			}
		
	}while(sair != 3);
	

	return 0;
}




