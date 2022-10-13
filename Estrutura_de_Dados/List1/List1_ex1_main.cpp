#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
	
	int i, j;

    for(i = 1; i <= 9; i = i + 1)
		 {

		for(j = 1; j <= 10; j = j + 1)
		
			cout<< j << "x" << i << "=" << i*j << endl ;

        	cout<<"\n";

   		 }
	
	
	
	
	
	
	return 0;
}
