#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>

using namespace std;

struct itens{
	char nome[30];
	double valor, reaj, *result;
};



int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int n=10;
	itens in[n];

	for(int i=0; i<n; i++)
	{
		cout<<"Nome do produto: ";
		cin>> in[i].nome;
		
		cout<<"Valor atual: ";
		cin>> in[i].valor; 
		
		 in[i].reaj = in[i].valor;
		in[i].result = &in[i].reaj;
		*in[i].result =  in[i].reaj * 1.04;
		
		
	}
	
	cout<<endl;
	
	cout<<"====== Preços Reajustados ======" <<endl;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Nome do produto: " << in[i].nome << endl;
		
		cout<<"Valor atual: " << *in[i].result << endl;
		
	}
	
	cout<<endl;
	cout<<endl;
	cout<<"====== Preços Originais ======" <<endl;
	
		for(int i=0; i<n; i++)
	{
		cout<<"Nome do produto: " << in[i].nome << endl;
		
		cout<<"Valor atual: " << in[i].valor<< endl;
		
	}
	
	
	
	
	return 0;
}
