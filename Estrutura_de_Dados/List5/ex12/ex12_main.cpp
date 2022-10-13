#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int cont1=0, cont2=0, op, num_elem, num_elem2;
	elem comp;
	bool erro;
	Pilha Pilha1, Pilha2;
	
	Create(&Pilha1);
	Create(&Pilha2);
	
	
	
	do
	{
		cout<<"\n\n====== MENU ======" <<endl;
		cout<<"1 - Inserir elementos na pilha 1" <<endl;
		cout<<"2 - Inserir elementos na pilha 2" <<endl;
		cout<<"3 - Verificar quantidade de elementos nas Pilhas" <<endl;
		cout<<"4 - Sair" <<endl;
		cin>>op;
		
		switch(op)
		{
		
		case 1: cout<<"\nDeseja inserir quantos elementos? " <<endl;
				cin>> num_elem;
				
				for(int i=0; i<num_elem; i++)
				{
					cout << "\nElemento: " << endl;
					cin >> comp;
					Push(&Pilha1, &comp, &erro);
					cont1++;
				}
				break;
				
		case 2: cout<<"\nDeseja inserir quantos elementos? " <<endl;
				cin>> num_elem2;
				
				for(int i=0; i<num_elem2; i++)
				{
					cout << "\nElemento: " << endl;
					cin >> comp;
					Push(&Pilha2, &comp, &erro);
					cont2++;
				}
				break;
		
		case 3:	cout<<"\nQuantidade de elementos na Pilha 1: " << cont1 <<endl;	
				cout<<"Quantidade de elementos na Pilha 2: " << cont2 <<endl; 
		
				break;
		
		case 4: op=4;
		
				break;
		
		default: cout<<"\nDigite uma opção válida!!!";	
		
				break;
		
		}
	
	}while(op != 4);


}
