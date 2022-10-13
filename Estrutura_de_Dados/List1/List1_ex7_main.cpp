#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

int cast(int, int, int, int);

int cast(int x, int y, int z, int w)
{

return (float)(pow(x,3)+(float)pow(y,2)+(float)pow(z,2)+(float)pow(w,2));

}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int valor;
	int x,y,z,w;
	
	cout<<"Digite o 1° valor: ";
	cin>>x;
	
	cout<<"Digite o 2° valor: ";
	cin>>y;
	
	cout<<"Digite o 3° valor: ";
	cin>>z;
	
	cout<<"Digite o 4° valor: ";
	cin>>w;
	
	valor=cast(x,y,z,w);
	cout<<"o valor é: "<<(float)valor;
	
} 


