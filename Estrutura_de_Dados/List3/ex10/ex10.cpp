/*
Crie um programa que leia do teclado uma sequência de 10 números decimais e um número que deseja buscar.
Armazene em um vetor. Depois disso, ordene os números de forma crescente. Por último, exiba o vetore se 
o número buscado foi encontrado ou não. Faça todo o exercício usando somente ponteiros.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
#include <string>
using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float vetor1[10], procurar, aux1, aux2;
	
	
	float *ptr1[10], *ptr2, *ptr3, *ptr4;
	
	ptr2 = &procurar;
	ptr3 = &aux1;
	ptr4 = &aux2;
	*(ptr4)=0;
	
	// recebe vetor
	for(int i=0; i<10; i++){
		ptr1[i] = &vetor1[i];
		
		cout << "Digite o valor do " << i+1 << "º número: " << endl;
		cin >> *(ptr1[i]);
		
	}
	// 
	cout << "Digite o número que desaja procurar:" << endl;
	cin >> *(ptr2);
	
	//ordenando
	for(int i=0; i<10; i++){
		for(int j=0; j<10-i-1; j++){
			if( *(ptr1[j]) > *(ptr1[j+1])){
				*(ptr3) = *(ptr1[j]);
				*(ptr1[j]) = *(ptr1[j+1]);
				*(ptr1[j+1]) = *(ptr3);
			}
		}
	}
	cout << "Vetor organizado ";
	for(int i=0; i<10; i++){
		cout << *(ptr1[i]) << " - ";
		
	}
	cout<<endl;
	for(int i=0; i<10; i++){
		if(*(ptr1[i]) == *(ptr2)){
			*(ptr4)++;
		}	
	}
	if(*(ptr4)>0){
		cout << "Número encontrado no Vetor! " << endl;
	}else{
		cout << "Número não encontrado no Vetor! " << endl;
	}
	
	
	return 0;
}
