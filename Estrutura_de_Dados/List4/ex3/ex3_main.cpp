#include <iostream>
#include <locale>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
using namespace std;

struct Produto {
char nome[30];
int *codigo=NULL; 
float *preco=NULL;
};


int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	
	Produto *p1=NULL, *p2=NULL, *p3=NULL;
	float aux, soma, media;
	int n=5, auxxx;
	char auxx[30];
	
	p1 = (Produto*)malloc(n * sizeof(Produto));
	
	
	
	cout<<"===== Cadastro de produtos =====" << endl;
	
	for(int i=0; i<n; i++)
	{
		
		
		cout<<"\nNome: ";
		cin>>p1[i].nome; 
		p1[i].codigo = (int*)malloc(1*sizeof(int));
		cout<<"Código: ";
		cin>>*(p1[i].codigo);
		p1[i].preco = (float*)malloc(1*sizeof(float));
		cout<<"Preço: R$ ";
		cin>>*(p1[i].preco);
	
	}
	
	//organiza os vetores
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(*(p1[i].preco) < *(p1[j].preco))
			{
				
				aux = *(p1[i].preco);
				*(p1[i].preco) = *(p1[j].preco);
				*(p1[j].preco) = aux;
				
				strcpy(auxx, p1[i].nome);
				strcpy(p1[i].nome, p1[j].nome);
				strcpy(p1[j].nome, auxx);
				
				auxxx = *(p1[i].codigo);
				*(p1[i].codigo) = *(p1[j].codigo);
				*(p1[j].codigo) = auxxx;
			}
		}
	}
	cout<<"\n-------------------------------------------";
	//calcular a média do vetor
	for(int i=0; i<n; i++)
	{
		soma = soma + *(p1[i].preco);
	}
	
	media = soma/n;
	
	cout<<"\n\nA média dos valores é: " << media;
	cout<<endl;
	
	for(int i=0; i<n; i++)
	{
		cout<<"\nNome: " << p1[i].nome << endl;
		
		cout<<"Código: " << *p1[i].codigo << endl;
		
		cout<<"Preço: R$ " << *p1[i].preco << endl;
					
	}
	
	
	
	
	
	return 0;
}
