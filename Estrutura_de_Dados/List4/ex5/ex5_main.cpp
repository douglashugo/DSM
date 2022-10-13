#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int x,y;
	int *vet=NULL;
	
	
	cout<<"Qual o tamanho do vetor: ";
	cin>>y;
	
	vet = (int*)malloc(y * sizeof(int));
	
	
	for(int i=0; i<y; i++)
	{
		cout<<"Digite os elementos do vetor: ";
		cin>>vet[i];
	}
	
	int i=0;
	
	while(i < y-1)
	{
		if(vet[i] == vet[i+1])
		{
			for(int j=i; j<y-1; j++)
			{
				vet[j] = vet[j+1];
			}
			y--;
			vet = (int*)realloc(vet,y*sizeof(int));
		}
		
		if(vet[i] == vet[i+1])
		{
			for(int j=i; j<y-1; j++)
			{
				vet[j] = vet[j+1];
			}
			
			vet = (int*)realloc(vet,y*sizeof(int));
		}
		
		{
			i++;
		}
	}
	
	cout<<"\nVetor: [";
	for(int i=0; i<y; i++)
	{
		cout<< " " << vet[i];
	}
	cout<<"]\n";
	
	
	
	return 0;
}
