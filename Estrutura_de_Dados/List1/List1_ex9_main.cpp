#include <iostream>
#include <locale>
#include <cmath>
#include <cstdlib>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>

using namespace std;



int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	float vetorA[10], min, max;
	
	for(int i=0; i<10; i++)
	{
		cout<<"Na posição " << i+1 << ", digite o valor do Vetor A: "; 
		cin>> vetorA[i];
	}
	min = max = vetorA[0];

	for(int i=0; i<10; i++)
	{
	
		if(vetorA[i] > max)
		{
			max = vetorA[i];	
		}
		if(vetorA[i] < min)
		{
			min = vetorA[i];
		}
		
		
	}
	
	cout<<"O maior valor é: " << max;
	cout<< endl;
	cout<<"O menor valor é: " << min;		
	
	return 0;
}
