/*
Faça um programa que controle o fluxo de voos nos aeroportos do Brasil. 
Temos 5 aeroportos e 10 voos.
- Crie e leia do usuário um vetor de voos, sendo que cada voo contém um código 
de aeroporto de origem e um de destino.
- Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, nome, 
quantidade de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto é identificado por um código inteiro entre 0 e 5. 
Não aceite aeroportos de código inexistente (faça a verificação).
CUIDADO: tem um valor em comum que interliga as duas structs. Tenha coerência na 
hora de popular as structs.  Um aeroporto não pode ter mais de 10 voos nem de chegada 
e nem de saída, faça a verificação disso.
Por fim, exiba na tela o nome de cada aeroporto e os voos que chegaram e saíram dele, 
ou seja, o nome do aeroporto de origem do voo e o nome do aeroporto de destino do voo.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int aux = 1, op, aux2[5];

struct VOO {
	int codVoo;
	int codVooChegada;
	int codVooSaida;
};

struct AEROPORTO {
	int cod;
	string name;
	
};


int main() {
	setlocale (LC_ALL, "Portuguese");
	
	AEROPORTO aeroporto[5];
	VOO voo[aux+1];
	string usuario[100];
	
	aeroporto[0].cod = 01;
	aeroporto[0].name = "Guarulhos";
	aeroporto[1].cod = 02;
	aeroporto[1].name = "Congonhas";
	aeroporto[2].cod = 03;
	aeroporto[2].name = "Galeão";
	aeroporto[3].cod = 04;
	aeroporto[3].name = "Brasília";
	aeroporto[4].cod = 05;
	aeroporto[4].name = "Confins";
			
	do{
		
		cout << "Digite seu nome:" << endl;
		cin >> usuario[aux-1];
		cout << "Digite o código do seu Voo" << endl;
		cin >> voo[aux-1].codVoo;
		
		cout << "Digite o código do Aeroporto de origem" << endl;
		cin >> voo[aux-1].codVooSaida;
		
		aux2[(voo[aux-1].codVooSaida)-1]++;
	
			//Verifica se o código do aeroporto existe
			do{
				if(voo[aux-1].codVooSaida > 5 || voo[aux-1].codVooSaida < 1){
						cout << "Código digitado incorretamente" << endl;
						cout << "O aeroporto tem código de 1 à 5" << endl;
						cin >> voo[aux-1].codVooSaida;
					}		
			}while(voo[aux-1].codVooSaida > 5 || voo[aux-1].codVooSaida < 1);

		cout << "Digite o código do Aeroporto de destino" << endl;
		cin >> voo[aux-1].codVooChegada;
		
		aux2[(voo[aux-1].codVooChegada)-1]++;
		
			//Verifica se o código do aeroporto existe
			do{
				if(voo[aux-1].codVooChegada > 5 ||voo[aux-1].codVooChegada < 1){
						cout << "Código digitado incorretamente" << endl;
						cout << "O aeroporto tem código de 1 à 5" << endl;
						cin >> voo[aux-1].codVooChegada;
					}		
			}while(voo[aux-1].codVooChegada > 5 ||voo[aux-1].codVooChegada < 1);
		
		
		aux++;
		//cout << "Valor aux" << aux<< endl;
		//Verifica a lotação dos voos
		for(int i=0; i<5; i++){
			//cout << "i - " << i << " - "<<aux2[i] << endl;
			if(aux2[i]>10){
				cout << "Voo não cadastrado!!!" << endl;
				cout << "Aeroporto de " << aeroporto[i].name << " Esta com a capadidade de voo acima do permitido!" <<endl;
				cout << "Selecione outra Origem/Destino, ou procure um atendente" << endl;
				aux--;
				aux2[i]--;
			}
		}
		cout << "Deseja Cadastrar outro passageiro ou viagem Digite 1" << endl;
		cin >> op;	
	}while(op == 1);
	
	
	/*	Esse for imprime todos os voos cadastrados
	for(int i=0; i<aux-1; i++){
		cout << "i: " << i << endl;
		cout << "Nome Viajante: " << usuario[i] << endl;
		cout << "CodVoo: " << voo[i].codVoo << endl;
		cout << "codVooSaida: " << voo[i].codVooSaida << endl;
		cout << "codVooChegada: " << voo[i].codVooChegada << endl;
	}
	*/
	if(aux2[0] !=0 ){
		cout << endl;
		cout <<"Voos com Origem em Guarulhos:"<<endl;
		for(int i=0; i<aux-1; i++){
			if (voo[i].codVooSaida == 1){
				cout << "Nome Viajante: " << usuario[i] << endl;
				cout << "CodVoo: " << voo[i].codVoo << endl;
				cout << "codVooSaida: " << voo[i].codVooSaida << endl;
				cout << "----------------------------------------" << endl;
			}
		}
		cout << endl;
		cout <<"Voos com Destino em Guarulhos:"<<endl;
		for(int i=0; i<aux-1; i++){
			if (voo[i].codVooChegada == 1){
				cout << "Nome Viajante: " << usuario[i] << endl;
				cout << "CodVoo: " << voo[i].codVoo << endl;
				cout << "codVooChegada: " << voo[i].codVooChegada << endl;
				cout << "----------------------------------------" << endl;
			}
		}	
	}
	
	if(aux2[1] !=0 ){
		cout << endl;
		cout <<"Voos com Origem em Congonhas:"<<endl;
		for(int i=0; i<aux-1; i++){
			if (voo[i].codVooSaida == 2){
				cout << "Nome Viajante: " << usuario[i] << endl;
				cout << "CodVoo: " << voo[i].codVoo << endl;
				cout << "codVooSaida: " << voo[i].codVooSaida << endl;
				cout << "----------------------------------------" << endl;
			}
		}
		cout << endl;
		cout <<"Voos com Destino em Congonhas:"<<endl;
		for(int i=0; i<aux-1; i++){
			if (voo[i].codVooChegada == 2){
				cout << "Nome Viajante: " << usuario[i] << endl;
				cout << "CodVoo: " << voo[i].codVoo << endl;
				cout << "codVooChegada: " << voo[i].codVooChegada << endl;
				cout << "----------------------------------------" << endl;
			}
		}
	}
	
	if(aux2[2] !=0 ){
		cout<<endl;
		cout <<"Voos com Origem em Galeão:"<<endl;
		for(int i=0; i<aux-1; i++){
			if (voo[i].codVooSaida == 3){
				cout << "Nome Viajante: " << usuario[i] << endl;
				cout << "CodVoo: " << voo[i].codVoo << endl;
				cout << "codVooSaida: " << voo[i].codVooSaida << endl;
				cout << "----------------------------------------" << endl;
			}
		}
		cout << endl;
		cout <<"Voos com Destino em Galeão:"<<endl;
		for(int i=0; i<aux-1; i++){
			if (voo[i].codVooChegada == 3){
				cout << "Nome Viajante: " << usuario[i] << endl;
				cout << "CodVoo: " << voo[i].codVoo << endl;
				cout << "codVooChegada: " << voo[i].codVooChegada << endl;
				cout << "----------------------------------------" << endl;
			}
		}
	}
	
	if(aux2[3] !=0 ){
		cout<<endl;
		cout <<"Voos com Origem em Brasília:"<<endl;
		for(int i=0; i<aux-1; i++){
			if (voo[i].codVooSaida == 4){
				cout << "Nome Viajante: " << usuario[i] << endl;
				cout << "CodVoo: " << voo[i].codVoo << endl;
				cout << "codVooSaida: " << voo[i].codVooSaida << endl;
				cout << "----------------------------------------" << endl;
			}
		}
		cout << endl;
		cout <<"Voos com Destino em Brasília:"<<endl;
		for(int i=0; i<aux-1; i++){
			if (voo[i].codVooChegada == 4){
				cout << "Nome Viajante: " << usuario[i] << endl;
				cout << "CodVoo: " << voo[i].codVoo << endl;
				cout << "codVooChegada: " << voo[i].codVooChegada << endl;
				cout << "----------------------------------------" << endl;
			}
		}
	}
	
	if(aux2[4] !=0 ){
		cout<<endl;
		cout <<"Voos com Origem em Confins:"<<endl;
		for(int i=0; i<aux-1; i++){
			if (voo[i].codVooSaida == 5){
				cout << "Nome Viajante: " << usuario[i] << endl;
				cout << "CodVoo: " << voo[i].codVoo << endl;
				cout << "codVooSaida: " << voo[i].codVooSaida << endl;
				cout << "----------------------------------------" << endl;
			}
		}
		cout << endl;
		cout <<"Voos com Destino em Confins:"<<endl;
		for(int i=0; i<aux-1; i++){
			if (voo[i].codVooChegada == 5){
				cout << "Nome Viajante: " << usuario[i] << endl;
				cout << "CodVoo: " << voo[i].codVoo << endl;
				cout << "codVooChegada: " << voo[i].codVooChegada << endl;
				cout << "----------------------------------------" << endl;
			}
		}
	}
	
	return 0;
}
