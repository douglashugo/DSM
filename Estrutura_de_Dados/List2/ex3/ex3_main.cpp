#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>

using namespace std;

struct ponto
	{
		double x1, x2, y1, y2;
	};	

double calcularDist(ponto);
double calcularDist(ponto doisPontos)
	{
	
		return sqrt(pow(doisPontos.x2-doisPontos.x1,2) + pow(doisPontos.y2-doisPontos.y1,2));
	
	}
	
int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	ponto doisPontos;
	
	cout<<"Digite os valores do ponto 1 - Exemplo: x1 y1: ";
	cin>>doisPontos.x1;
	cin>>doisPontos.y1;
	cout<<endl;
	
	cout<<"Digite os valores do ponto 2 - Exemplo: x2 y2: ";
	cin>>doisPontos.x2;
	cin>>doisPontos.y2;
	cout<<endl;
	cout<<endl;	
	
	cout<<"Distância entre os pontos: " << calcularDist(doisPontos);

	return 0;
}
