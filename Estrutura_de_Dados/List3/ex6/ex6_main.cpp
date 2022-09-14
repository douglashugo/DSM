#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>

using namespace std;

struct funcionario{
	int inteiros[5], *pontint=NULL;
	float decimais[5], *pontdec=NULL;
	char letras[5], *pontchar=NULL;
	

};

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "portuguese");
	
	int n=5, *pontint=NULL;
	float *pontdec=NULL;
	char *pontchar=NULL;
	struct funcionario f;
	
	for(int i=0; i<n; i++)
	{
		cout<<"\n" << i+1 << " - Número inteiro: ";
		cin>>f.inteiros[i];
		
		cout<<"" << i+1 << " - Número decimal: ";
		cin>>f.decimais[i];
		
		cout<<"" << i+1 << " - Letra: ";
		cin>>f.letras[i];
		
		pontint = &f.inteiros[i];
		pontdec = &f.decimais[i];
		pontchar = &f.letras[i];
		
		*pontint = 100;
		*pontdec = 1.99;
		*pontchar = *"W";
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<"\n" << i+1 << " - Número inteiro: "<< f.inteiros[i] <<endl;
		
		cout<<"" << i+1 << " - Número decimal: " << f.decimais[i] <<endl;
		
		cout<<"" << i+1 << " - Letra: " << f.letras[i] <<endl;
	}
	
	return 0;
}
