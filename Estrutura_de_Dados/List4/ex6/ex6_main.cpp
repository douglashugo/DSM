#include <iostream>
#include <locale>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <time.h>
#include <ctime>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "portuguese");
	int n, m;
	int **mat;
	
	cout<<"Quais os números de linhas? ";
	cin>>n;
	cout<<"Quais os números de colunas? ";
	cin>>m;
	
	
	//aloca um vetor de n ponteiros para linhas
	mat = (int**)malloc(n * sizeof(int));
	
	//aloca um vetor de m ponteiros para colunas
	for(int i=0; i<m; i++)
	{
		mat[i] = (int*)malloc(m * sizeof(int));	
	}
	
	//preenchendo com elementos
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<"Digite o elemento " << i << j << ": ";
			cin>>mat[i][j];
		}
	}
	cout<<endl;
	
	//imprimir
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<mat[i][j];
		}
		cout<<endl;
	}
		
	
	
	return 0;
}
