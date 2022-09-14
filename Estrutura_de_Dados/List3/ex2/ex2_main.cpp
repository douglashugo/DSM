#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>

using namespace std;

struct Produto {
char nome[30];
int *codigo, cod; 
double *preco, prec;
char fornecedor[50]; 
};


int main() 
{
	setlocale(LC_ALL, "portuguese");
	int n=5;
	
	Produto p[n];
	
	cout<<"===== Cadastro de produtos =====" << endl;
	
	for(int i=0; i<n; i++)
	{
		p[i].codigo = &p[i].cod;
		p[i].preco = &p[i].prec; 
		
		
		cout<<"Nome: ";
		cin>>p[i].nome; 
		
		cout<<"Código: ";
		cin>>*(p[i].codigo);
		
		cout<<"Preço: R$ ";
		cin>>*(p[i].preco);
		
		cout<<"Fornecedor: ";
		cin>>p[i].fornecedor;	
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<"Nome: " << p[i].nome << endl;
		
		cout<<"Código: " << *(p[i].codigo) << endl;
		
		cout<<"Preço: R$ " << *(p[i].preco) << endl;
		
		cout<<"Fornecedor: " << p[i].fornecedor << endl;			
	}
	
	
	
	
	
	return 0;
}
