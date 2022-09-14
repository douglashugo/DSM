#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>

using namespace std;

struct produtos
	{
	int codigo, qtd;
	float preco;
	string nome;
	};
	
int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	produtos p[5];
	int n, opcao, aux, auxx, i=0; 
	
	p[0].codigo =11;
	p[0].nome = "Arroz";
	p[0].preco = 17.50;
	p[0].qtd = 5;
	p[1].codigo =12;
	p[1].nome = "Macarrão";
	p[1].preco = 12.14;
	p[1].qtd = 6;
	p[2].codigo =13;
	p[2].nome = "Leite";
	p[2].preco = 7.60;
	p[2].qtd = 6;
	p[3].codigo =14;
	p[3].nome = "Ovos";
	p[3].preco = 13.20;
	p[3].qtd = 5;
	p[4].codigo =15;
	p[4].nome = "Margarina";
	p[4].preco = 6.49;
	p[4].qtd = 7;

	while(n != 3)
	{
		
	cout<<"\n\n\n-------- ESTOQUE --------"<<endl;
	cout<<"1 - Listar produtos"<<endl;
	cout<<"2 - Retirar items"<<endl;
	cout<<"3 - Sair"<<endl;
	cout<<"Selecione uma opção: ";
	cin>>opcao;
	cout<<endl;

	switch (opcao)
	{
		case 1: cout<< p[0].codigo << "  --" << p[0].nome <<"--      R$:" << p[0].preco<< "  --" <<"--    UN: "<< p[0].qtd <<endl; 
				cout<< p[1].codigo << "  --" << p[1].nome <<"--   R$:" << p[1].preco<< "  --" <<"--    UN: "<< p[1].qtd <<endl; 
				cout<< p[2].codigo << "  --" << p[2].nome <<"--      R$:" << p[2].preco<< "  --" <<"--    UN: "<< p[2].qtd <<endl; 
				cout<< p[3].codigo << "  --" << p[3].nome <<"--       R$:" << p[3].preco<< "  --" <<"--    UN: "<< p[3].qtd <<endl; 
				cout<< p[4].codigo << "  --" << p[4].nome <<"--  R$:" << p[4].preco<< "  --" <<"--    UN: "<< p[4].qtd <<endl; 
				
				break;
		
		case 2:	cout<<"Digite o código do produto: ";	
				cin>>aux;
				cout<<"Quantidade desejada: ";
				cin>>auxx;	
				
				for(int i=0; i<5; i++)
				{
				
				if(p[i].codigo == aux && p[i].qtd >= auxx)
					{
						cout<<endl;
						cout<<"Produto Vendido" <<endl;
						p[i].qtd = p[i].qtd - auxx;
						cout<<"Quantidade restante: " << p[i].qtd;		
					}
	
					else if(p[i].codigo == aux && auxx > p[i].qtd)
					{
						cout<<endl;
						cout<<"Quantidade insuficiente no estoque, temos apenas: " <<p[i].qtd <<endl;
						break;
					}
				
					else if(aux > p[4].codigo || aux < p[0].codigo)
					{
						cout<<"Não temos essa mercadoria em estoque ";	
						break;						
					}
				}
				break;
				
		
		case 3: n = 3;	
		
				break;	
			
	}
	} 

	return 0;
}
