#include <iostream>
#include <locale>
#include <cstdlib>
#include "estrutura_pilha.h"

using namespace std;


int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	int num_elem = 20;
	elem comp;
	bool erro;
	Pilha Pilha1, Pilha2, Pilha3;

	Create(&Pilha1);
	Create(&Pilha2);
	Create(&Pilha3);
	cout << "Pilhas criadas." << endl;
	
	
	cout<<endl;
	
	//Vamos popular a pilha
	for(int i=0; i<num_elem; i++)
	{		
		cout << "Elemento " << i+1 << endl;
		cin >> comp;
			if(comp%2 == 0 && comp >= 0)
			{
				Push(&Pilha1, &comp, &erro);
			}
				else if(comp%2 != 0 && comp < 0)
				{
					Push(&Pilha2, &comp, &erro);
				}
					else
					{
					Push(&Pilha3, &comp, &erro);
					}
	}
	
	
	
	//Exibindo Pilha1
	cout << "\nElementos da Pilha 1: " << endl;
	for(int i=Pilha1.topo; i>=0; i--)
	{
		cout << Pilha1.itens[i] << endl;
	}
	
	//Exibindo Pilha2
	cout << "\nElementos da Pilha 2: " << endl;
	for(int i=Pilha2.topo; i>=0; i--)
	{
		cout << Pilha2.itens[i] << endl;
	}
	
	//Exibindo Pilha3
	cout << "\nElementos da Pilha 3: " << endl;
	for(int i=Pilha3.topo; i>=0; i--)
	{
		cout << Pilha3.itens[i] << endl;
	}
		
	
}
	
