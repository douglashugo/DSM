#include <iostream>
#include <locale>
#include<stdio.h>

using namespace std;

int digitos(int num)
{
	/* como cont foi declarada como static, ela não está sendo inicialzada
	toda vez que a função é chamada */
    static int cont=0;

     if(num!=0)
     {
          cont++;
         digitos(num/10);
     }

    return cont;
}

int main()	
{
			setlocale(LC_ALL, "Portuguese");
			
  int num,cont;
    cout<<"\n===== Contador de dígitos =====\n";
    cout<<"Insira o numero : ";
    cin>> num;

    cont = digitos(num);

    cout<<"\nO número digitado tem: " << cont << " dígitos";
 return 0; 
}
