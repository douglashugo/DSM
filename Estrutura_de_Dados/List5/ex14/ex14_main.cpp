#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;


void invt(string str)
{
    if(str.size() == 0)
    {
        return;
    }
    invt(str.substr(1));
    cout << str[0];
}
 
int main()
			setlocale(LC_ALL, "Portuguese");
{
    string w = "Estrutura de Dados";
    invt(w);
    return 0;
}
