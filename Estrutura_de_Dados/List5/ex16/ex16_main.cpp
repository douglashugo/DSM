#include <iostream>
#include<stdio.h>
#include<locale.h> 

using namespace std;

int soma(int num) 
{
   int result;
   if (num == 1) 
    {
      return (1);
    }
   else 
     {
        result = num + soma(num - 1);
      }
   return (result);
}

int main() 
{
				setlocale(LC_ALL,"portuguese");
   int num;
   int somatorio;
   
   cout<<"==== Somat�ria de todos os n�meros de 1 a N ====";  

   cout<<"\nDigite um n�mero: ";
   cin>>num; 
   somatorio = soma(num);
   
    cout<<"\nA somat�ria dos n�meros de 1 at� " << num << " �: " << somatorio;

 return 0; 
}
