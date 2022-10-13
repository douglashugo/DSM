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
   
   cout<<"==== Somatória de todos os números de 1 a N ====";  

   cout<<"\nDigite um número: ";
   cin>>num; 
   somatorio = soma(num);
   
    cout<<"\nA somatória dos números de 1 até " << num << " é: " << somatorio;

 return 0; 
}
