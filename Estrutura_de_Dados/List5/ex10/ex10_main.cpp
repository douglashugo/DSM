#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num_elem;
	elem comp, maior, menor, soma=0, media;
	bool erro;
	Pilha P;
	cout << "Quantos elementos tem sua pilha?" << endl;
	cin >> num_elem;
	
	Create(&P);
	cout << "\nPilha criada." << endl;
	
	// Vamos popular a pilha
	for(int i=0; i<num_elem; i++)
	{
		cout << "Elemento " << i+1 << endl;
		cin >> comp;
		soma += comp;
		media = soma/ num_elem;
		Push(&P, &comp, &erro);
	}
	
	while(!IsEmpty(&P))
	{
		Pop(&P, &erro);
		for(int i=0; i<num_elem; i++)
		{
			if(P.itens[i]>maior)
			maior = P.itens[i];
			if(P.itens[i]<menor)
			menor = P.itens[i];
			
			
						
		}
	}
	
	
	cout<<"\nMaior: " << maior <<endl;
	cout<<"\nMenor: " << menor <<endl;
	cout<<"\nMédia: " << media;
	

	
	
}
