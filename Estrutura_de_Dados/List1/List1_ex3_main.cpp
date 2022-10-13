#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main() 
{
	setlocale (LC_ALL, "portuguese");
	
	int soma=0;
	int vetorA[10];
	float media;
	
	for(int i=0; i<10; i++)
	{
		cout<< "Digite o valor " << i+1 << ": " ;
		cin>>vetorA[i];
		soma = soma + vetorA[i];
		cout<<endl;
	}
	
	media = soma/10;
		
	
		
	for(int i=0; i<10; i++)
		{
			if(vetorA[i] == media)
			{
			cout<< "Valor igual a média é: " << vetorA[i] << ". Na posição: " << i+1 <<endl ;
			break;
			}
		}
		
			
		
	
	
	
	
	
	return 0;
}
