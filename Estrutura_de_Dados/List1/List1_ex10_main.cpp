#include <iostream>
#include <locale>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int inteiro(int, int, int);

int inteiro(int a, int aux, int p)
{	
		for(aux=2; aux<a; aux++)
		{
			if(a%aux == 0)
			{
				p=0;
			}
		}
			if (p==1)
			{
				cout<<"É primo!!!";
			}
		
			else if(a % 2 != 0)
			{
				cout<<"Número impar!!!";
			}
			else if(a % 2 == 0)
			{
				cout <<"Número par!!!";
			}
};

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int a, aux=0, p=1;
	
	cout<<"Digite um número inteiro: ";
	cin>>a;
	
	inteiro(a, aux, p);

	
	return 0;
}
