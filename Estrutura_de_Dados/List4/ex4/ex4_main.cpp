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
	int *n, *m, x, y;
	n = &x;
	m = &y;
	int **mat=NULL;
	
	cout<<"Quais os números de linhas? ";
	cin>>*n;
	cout<<"Quais os números de colunas? ";
	cin>>*m;
	if(*n != *m)
	{
		cout<<"Os número de colunas deve ser o mesmo das linhas!!!";
	}
	else{
	
	
	//aloca um vetor de n ponteiros para linhas
	mat = (int**)malloc(*n * sizeof(int*));
	
	//aloca um vetor de m ponteiros para colunas
	for(int i=0; i<*m; i++)
	{
		mat[i] = (int*)malloc(*m * sizeof(int));	
	}
	
	//preenchendo com elementos 0
	for(int i=0; i<*n; i++)
	{
		for(int j=0; j<*m; j++)
		{
			mat[i][j] = 0;
		}
	}
	cout<<endl;
	
	//cronometrar tempo de processamento
	clock_t t;
	t=clock();
	for(int i=0; i<*n; i++)
	{
		for(int j=0; j<*m; j++)
		{
			cout<<mat[i][j];
		}
		cout<<endl;
	}
	t=clock()-t;
	
	cout<<"\nTempo de processamento: " << ((float)t)/CLOCKS_PER_SEC << " segundos";
	
	}
	
	return 0;
}
