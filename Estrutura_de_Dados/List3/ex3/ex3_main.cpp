#include <iostream>
#include <locale>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int arr[5] = { 10, 80, 40, 30, 20 };
	int *parr = &arr[4];
	int inx = 0;
	inx = *parr++;	
	
	// 1-) Sim, o c�digo compila.
	// 2-) O valor de inx � 20.
	// 3-) *parr est� apontando para o �ltimo �ndice do vetor arr, ou seja, para o 20.
	
	
	return 0;
}
