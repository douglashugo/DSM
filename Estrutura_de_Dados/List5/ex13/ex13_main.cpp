#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int cont1=0, cont2=0, op, i, j, num_elem, num_elem2, aux[i], auxx[i], troca, trocaa, auxcont=0;
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
		cout<<"3 - Verificar se as Pilhas são iguais" <<endl;
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
					aux[i] = comp;
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
					auxx[i] = comp;
					Push(&Pilha2, &comp, &erro);
					cont2++;
				}
				break;
		
		case 3:	for(int i=0; i<cont1; i++)
				{
					for(int j=i+1; j<cont1; j++)
					{
						if(aux[i] > aux[j])
						{
							troca = aux[i];
							aux[i] = aux[j];
							aux[j] = troca;
						}
					}
				}
				
				
				for(int i=0; i<cont2; i++)
				{
					for(int j=i+1; j<cont2; j++)
					{
						if(auxx[i] > auxx[j])
						{
							trocaa = auxx[i];
							auxx[i] = auxx[j];
							auxx[j] = trocaa;
						}
					}
				}
				
				for(int i=0; i<cont1; i++)
				{
					if(aux[i] == auxx[i])
					{
						auxcont++;
					}
				}
				
				if(cont1 == cont2 && auxcont == cont1)
				{
					cout<<"\nPilhas iguais!!!"<<endl;
				}
				else
				{
					cout<<"\nPilhas Diferentes!!!" <<endl;
				}
				
				break;
		
		case 4: op=4;
		
				break;
		
		default: cout<<"\nDigite uma opção válida!!!";	
		
				break;
		
		}
	
	}while(op != 4);


}
