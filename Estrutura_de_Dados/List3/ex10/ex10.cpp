/*
Crie um programa que leia do teclado uma sequ�ncia de 10 n�meros decimais e um n�mero que deseja buscar.
Armazene em um vetor. Depois disso, ordene os n�meros de forma crescente. Por �ltimo, exiba o vetore se 
o n�mero buscado foi encontrado ou n�o. Fa�a todo o exerc�cio usando somente ponteiros.
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
		
		cout << "Digite o valor do " << i+1 << "� n�mero: " << endl;
		cin >> *(ptr1[i]);
		
	}
	// 
	cout << "Digite o n�mero que desaja procurar:" << endl;
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
		cout << "N�mero encontrado no Vetor! " << endl;
	}else{
		cout << "N�mero n�o encontrado no Vetor! " << endl;
	}
	
	
	return 0;
}
