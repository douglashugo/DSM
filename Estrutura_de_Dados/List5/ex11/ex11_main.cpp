#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num_elem;
	elem comp;
	bool erro;
	Pilha Pilha1, aux, auxx;
	cout << "Quantos elementos tem sua pilha?" << endl;
	cin >> num_elem;
	
	Create(&Pilha1);
	cout << "\nPilha criada." << endl;
	
	// Vamos popular a pilha
	for(int i=0; i<num_elem; i++)
	{
		cout << "Elemento " << i+1 << endl;
		cin >> comp;
		Push(&Pilha1, &comp, &erro);
	}
	
	//exibindo pilha1
	cout << "\nElementos da Pilha 1: " << endl;
	for(int i=0; i<num_elem; i++)
	{
		cout << Pilha1.itens[i] << endl;
	}
	
	//passando elementos para auxiliar1
	Create(&aux);
	for(int i=Pilha1.topo; i>=0; i--)
	{
		Pop(&Pilha1, &erro);
		Push(&aux, &X, &erro);
		
	}	
	
	//passando elementos para auxiliar2
	Create(&auxx);
	for(int i=aux.topo; i>=0; i--)
	{
		Pop(&aux, &erro);
		Push(&auxx, &X, &erro);
		
	}
	
	//retornando elementos invertidos da pilha1
	for(int i=auxx.topo; i>=0; i--)
	{
		Pop(&auxx, &erro);
		Push(&Pilha1, &X, &erro);
		
	}
	

	//exibindo pilha1	
	cout << "\nElementos da Pilha 1 invertida: " << endl;
	for(int i=0; i<num_elem; i++)
	{
		cout << Pilha1.itens[i] << endl;
	}

}
