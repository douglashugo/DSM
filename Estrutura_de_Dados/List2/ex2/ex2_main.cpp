#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>


using namespace std;



struct datanascimento
	{
		int dia, mes, ano;
	};

struct Dados 
	{
		datanascimento dataN;
		string nome;		
	};
	

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int  aux, auxx, auxxx, n=5;
	string auxxxx;
	Dados dados[n];
	
	
	
	for(int i=0; i<n; i++)
	{
		cout<< " - Nome: ";
		cin>>dados[i].nome;
			
		cout<< " - Data de Nascimento no formato dd mm aaaa: ";
		cin>>dados[i].dataN.dia;
		cin>>dados[i].dataN.mes;
		cin>>dados[i].dataN.ano;	
		cout<<endl;

	}
	
		for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{	
			if(dados[i].dataN.ano > dados[j].dataN.ano)
			{
					
				auxxx = dados[i].dataN.ano;
				dados[i].dataN.ano = dados[j].dataN.ano;
				dados[j].dataN.ano = auxxx;
				
				auxx = dados[i].dataN.mes;
				dados[i].dataN.mes = dados[j].dataN.mes;
				dados[j].dataN.mes = auxx;
				
				aux = dados[i].dataN.dia;
				dados[i].dataN.dia = dados[j].dataN.dia;
				dados[j].dataN.dia = aux;
				
				auxxxx = dados[i].nome;
				dados[i].nome = dados[j].nome;
				dados[j].nome = aux;
			}
			else if(dados[i].dataN.mes > dados[j].dataN.mes)
			{
				auxxx = dados[i].dataN.ano;
				dados[i].dataN.ano = dados[j].dataN.ano;
				dados[j].dataN.ano = auxxx;
				
				auxx = dados[i].dataN.mes;
				dados[i].dataN.mes = dados[j].dataN.mes;
				dados[j].dataN.mes = auxx;
				
				aux = dados[i].dataN.dia;
				dados[i].dataN.dia = dados[j].dataN.dia;
				dados[j].dataN.dia = aux;
				
				auxxxx = dados[i].nome;
				dados[i].nome = dados[j].nome;
				dados[j].nome = aux;
			}
			else if(dados[i].dataN.dia > dados[j].dataN.dia)
			{
				auxxx = dados[i].dataN.ano;
				dados[i].dataN.ano = dados[j].dataN.ano;
				dados[j].dataN.ano = auxxx;
				
				auxx = dados[i].dataN.mes;
				dados[i].dataN.mes = dados[j].dataN.mes;
				dados[j].dataN.mes = auxx;
				
				aux = dados[i].dataN.dia;
				dados[i].dataN.dia = dados[j].dataN.dia;
				dados[j].dataN.dia = aux;
				
				auxxxx = dados[i].nome;
				dados[i].nome = dados[j].nome;
				dados[j].nome = aux;
			}
		}
	}
	
		cout<<"Nome: " << dados[0].nome<< endl;
		cout<<"Data de Nasc: " << dados[0].dataN.dia << "/";
		cout<< dados[0].dataN.mes << "/";
		cout<< dados[0].dataN.ano; 
		
	

			
	
	
	
	return 0;
}
