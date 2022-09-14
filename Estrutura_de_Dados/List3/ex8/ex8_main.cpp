#include <iostream>
#include <locale>
#include <stdlib.h>
#include <cstring>
#include <string.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	
	// ***** Letra A *****
	int n=9;	
	int *v[n];
	int pt[n];
	int i, j, k=0, aux, matriz[3][3];
	int *auxx[3][3];
 
	
	for(i=0; i<n; i++)
	{
		v[i] = &pt[i];
		
		cout<<"Digite os valores para o vetor na posição " << i+1 << ": ";
		cin>>*v[i];
	}
	
	
	
	// ***** Letra B *****
	
	for (i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(*v[i] > *v[j])
			{
				aux = *v[i];
				*v[i] = *v[j];
				*v[j] = aux;
			}
		}
	}
	
	cout << endl;
	cout<<"Vetor organizado em ordem Crescente" << endl;
	
	// ***** Letra C *****
	
	for(i=0; i<n; i++)
	{
		cout<<"V[" << i <<"]=" << *v[i] <<endl;
	}
	for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
        {
			auxx[i][j] = &matriz[i][j];
			*auxx[i][j] = *v[k];
			k++;
			
		}
	}
	
	// ***** Letra D *****
	
	cout<<"\nElementos da Matriz";
	for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
        {
			
			cout<< "\n("<<i+1<<","<<j+1<<") = " << *auxx[i][j];
			
		}
	}
	
	
	
	
			
	
		
	

	

	

	return 0;
}
