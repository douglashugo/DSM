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
				cout<<"� primo!!!";
			}
		
			else if(a % 2 != 0)
			{
				cout<<"N�mero impar!!!";
			}
			else if(a % 2 == 0)
			{
				cout <<"N�mero par!!!";
			}
};

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int a, aux=0, p=1;
	
	cout<<"Digite um n�mero inteiro: ";
	cin>>a;
	
	inteiro(a, aux, p);

	
	return 0;
}
