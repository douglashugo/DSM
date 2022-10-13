#include <iostream>
#include <locale>
#include <cstdlib>
#include <string.h>

using namespace std;

int fibonacci (int, int, int);

int fibonacci (int soma, int v1, int v2)
{
	for(int i=1; i<=15; i++)
	{		
	soma = v1 + v2;
	cout<< "Fibonacci: " << v2 << endl;
	v1 = v2;
	v2 = soma;		
	}	
}

int main() 
{
	setlocale(LC_ALL, "portuguese");	
	
	int soma, v1=0, v2=1;
	
	fibonacci(soma, v1, v2);
	
	
	return 0;
}
