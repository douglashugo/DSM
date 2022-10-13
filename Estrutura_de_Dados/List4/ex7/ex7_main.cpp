#include <iostream>
#include <locale>
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
	
	int n, y=1; //O(1)
	
	cout<<"Digite um n�mero para calcular seu fatorial: ";
	cin>> n; 
	
	clock_t t;
	t=clock(); //O(1)
	for(int i=1; i<=n; i++) //O(N)
	{
		y *= i; //(1)
	}
	t=clock()-t; //(1)
	
	
	cout<<"\nFatorial �: " << y;
	
	cout<<"\nTempo de processamento: " << ((float)t)/CLOCKS_PER_SEC << " segundos";
	
	/*Conforme analisado acima vemos que o programa tem complexidade 
	de O(N), sendo ela no par�mentro for os demais s�o todos constantes. */
	
	
	
	
	
	
	return 0;
}
