#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>

using namespace std;

int main(int argc, char** argv) 
{
	int count = 30, *temp, sum = 2;
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	cout<< " count = " << count; 
	cout<< "*temp = " << *temp;
	cout<< "sum = " << sum;

	/*Não compilou pois havia erros, estava faltando ";" , "<<" e "cout". 
	Ajustei e o mesmo compilou, sendo os seguintes valores: cout = 20, *temp = 20 e sum = 20.*/
	
	
	
	
	return 0;
}
