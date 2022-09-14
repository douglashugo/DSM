#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>

using namespace std;

void exibir (char** arr, int tamanho);
void exibir (char** arr, int tamanho)
{
	for(int i=0; i<tamanho; i++)
	{
		cout<<"Nome: " << *arr++;
		cout<< endl;
	}	
		
}
	

int main (int argc, char** argv)
{
	
	char* nome1 = "Luis";
	char* nome2 = "Fernando";
	char* nome3 = "Vitoria";
	char* nome4 = "Leticia";
	
	char* nomes[4] = {nome1, nome2, nome3, nome4};
	
	
	exibir(nomes, 4);
	
	
	return 0;
}
