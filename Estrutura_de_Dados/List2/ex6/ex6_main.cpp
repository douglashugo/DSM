#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <cstdlib>
#include <time.h>

using namespace std;

struct sorteio
{
	string nome;
	int numvinculado, numsorteado;
};


int aleatorio(sorteio);
int aleatorio(sorteio s)
{
	srand(time(NULL));

    return s.numsorteado = (1 + rand()%4);
}


int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int n=4;
	sorteio s[n];
	
	for(int i=0; i<n; i++)
	{
		cout<< i+1 <<"- Nome: ";
		cin>>s[i].nome;
		s[i].numvinculado = (1 + rand()%4);
		cout<< "Número vinculado: " <<s[i].numvinculado <<endl;
		cout<<endl;
	}
	
	int aleatorio(sorteio s);
	
	for(int i=0; i<n; i++)
	{
		if(aleatorio(*s) == s[i].numvinculado)
		{
			cout<<"\nNúmero sorteado: " <<aleatorio(*s)<<endl;
			cout<<"Nome da pessoa sorteada: " <<s[i].nome;
		}
	}
		
	
	
	return 0;
}
