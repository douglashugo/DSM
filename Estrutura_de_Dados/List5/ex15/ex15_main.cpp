#include <iostream>
#include <locale>
#include<stdio.h>

using namespace std;

int digitos(int num)
{
	/* como cont foi declarada como static, ela n�o est� sendo inicialzada
	toda vez que a fun��o � chamada */
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
    cout<<"\n===== Contador de d�gitos =====\n";
    cout<<"Insira o numero : ";
    cin>> num;

    cont = digitos(num);

    cout<<"\nO n�mero digitado tem: " << cont << " d�gitos";
 return 0; 
}
