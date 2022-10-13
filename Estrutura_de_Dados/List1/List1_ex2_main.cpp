#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	float vetorA[10];
	
	for(int i=0; i<10; i++)
	{
		cout<<"Digite o valor do produto " << i+1 << ": R$ ";
		cin>> vetorA[i];		
		cout<<"\n";
	}
	
		cout<<"\n=====Preços atualizados=====" << endl ;
		
	for(int i=0; i<10; i++)
	{
		vetorA[i] = (vetorA[i] * 0.15) + vetorA[i];
		cout<< "\nProduto " << i+1 << ": R$ " << vetorA[i] << endl;
	}
	

	return 0;
}
