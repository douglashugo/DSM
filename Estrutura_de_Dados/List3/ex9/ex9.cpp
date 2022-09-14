/*
Crie um programa que leia do teclado duas frases. 
a)Atrav�s de ponteiro, determine quantas letras tem a primeira frase 
(ou seja, use o ponteiro para percorrer o array de char). 
b)Verifique o tamanho dessa segunda frase (usando strlen), use strcpy para 
copiar a segunda frase numa terceira vari�vel e compare as duas frases 
usando strcmp. Fa�a essa parte usando uma fun��o que recebe como 
par�metro as duas frases e retorne o tamanho da maior frase
*/
#include <iostream>
#include <locale>
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;

void comparaFrase(char fr1, char fr2);

void comparaFrase(char *fr1, char *fr2){
	
	//cout << fr1 << endl;
	//cout << fr2 << endl;
	if(strncmp(fr1, fr2, 50) < 0){
		cout << "O tamanho da maior frase �: " << strlen(fr1) << endl;
	}else if(strncmp(fr1, fr2, 50) > 0){
		cout << "O tamanho da maior frase �: " << strlen(fr2) << endl;
	}else{
		cout << "As frases tem o mesmo tamanho! " << endl;
	}
	
	//cout << strcmp(fr1, fr2) << endl;
	
	
	
}


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char frase1[50], frase2[50], frase3[50];
	int cont = 0, *ptr;
	
	ptr = &cont;
	
	cout << "Digite a 1� frase: " << endl;
	gets (frase1);
	
	cout << "Digite a 2� frase: " << endl;
	gets (frase2);
	
	while(frase1[*(ptr)] != '\0' ){
		cont++;
	}
	
	cout<< "Tamanho da primeira frase �: " << *(ptr) << endl;
	cout<<endl;
	cout << "O tamanho da segunda frase �: " << strlen(frase2) << endl;
	cout<<endl;
	strcpy(frase3, frase2);
	
	comparaFrase(frase1, frase3);
	
	//cout << frase1 << endl;
	//cout << frase2 << endl;
	//cout << frase3 << endl;
		
	
	
	return 0;
}
