#include <iostream>
#include <locale>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>

using namespace std;

struct triangulo
	{
		double x1, x2, z1, y1, y2, z2 ;
	};	

double resultado(triangulo);
double resultado(triangulo doisTriangulos)
	{
		if(doisTriangulos.x1 + doisTriangulos.y1 > doisTriangulos.z1 && doisTriangulos.x1 + doisTriangulos.z1 > doisTriangulos.y1 && doisTriangulos.y1 + doisTriangulos.z1 > doisTriangulos.x1)
		{
        cout<<"Os 3 lados formam um triângulo!"<<endl;
        if(doisTriangulos.x1 == doisTriangulos.y1 && doisTriangulos.x1 == doisTriangulos.z1)
            cout<<"Equilatero"<<endl;
        else
            if(doisTriangulos.x1 == doisTriangulos.y1 || doisTriangulos.x1 == doisTriangulos.z1 || doisTriangulos.y1 == doisTriangulos.z1)
                cout<<"Isosceles"<<endl;
            else
                cout<<"Escaleno"<<endl;
    	}
    	else
        	cout<<"Os 3 lados não formam um triângulo!"<<endl;
        	cout<<endl;
			
			if(doisTriangulos.x2 + doisTriangulos.y2 > doisTriangulos.z2 && doisTriangulos.x2 + doisTriangulos.z2 > doisTriangulos.y2 && doisTriangulos.y2 + doisTriangulos.z2 > doisTriangulos.x2)
			{
        	cout<<"Os 3 lados formam um triângulo!"<<endl;
        	if(doisTriangulos.x2 == doisTriangulos.y2 && doisTriangulos.x2 == doisTriangulos.z2)
            	cout<<"Equilatero"<<endl;
        	else
            if(doisTriangulos.x2 == doisTriangulos.y2 || doisTriangulos.x2 == doisTriangulos.z2 || doisTriangulos.y2 == doisTriangulos.z2)
                cout<<"Isosceles"<<endl;
            else
                cout<<"Escaleno"<<endl;
    		}
    		else
        		cout<<"Os 3 lados não formam um triângulo!"<<endl;
			
	
	}	
	
int main() 
{
	setlocale(LC_ALL, "portuguese");
	triangulo doisTriangulos;
	
	cout<<"Digite os valores do triângulo 1: ";
	cin>>doisTriangulos.x1;
	cin>>doisTriangulos.y1;
	cin>>doisTriangulos.z1;
	cout<<endl;
	
	cout<<"Digite os valores do triângulo 2: ";
	cin>>doisTriangulos.x2;
	cin>>doisTriangulos.y2;
	cin>>doisTriangulos.z2;
	cout<<endl;
	cout<<endl;

	resultado(doisTriangulos);

	return 0;
}
