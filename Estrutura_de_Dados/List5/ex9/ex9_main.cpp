#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int cont=0;
	elem comp;
	bool erro;
	Pilha P;
	
	//troquei as letras por números, sendo: A=1, B=2, C=3, D=4, K=5 e V=6.
	Create(&P);
	cout << "\nPilha criada." << endl;
	
		comp = 1;
		Push(&P, &comp, &erro);
		cont++;
		comp = 2;
		Push(&P, &comp, &erro);
		cont++;
		comp = 3;
		Push(&P, &comp, &erro);
		cont++;
		comp = 4;
		Push(&P, &comp, &erro);
		cont++;
		Pop(&P, &erro);
		cont--;
		Pop(&P, &erro);
		cont--;
		comp = 5;
		Push(&P, &comp, &erro);
		cont++;
		comp = 6;
		Push(&P, &comp, &erro);
		cont++;
		Pop(&P, &erro);
		cont--;
	
		cout << "\nElementos da Pilha: " << endl;
		for(int i=0; i<cont; i++)
		{
		cout << P.itens[i] << endl;
		}	
	
	
}
