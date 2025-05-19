#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero;
    cout << "Informe um número: \n";
    cin>>numero;
    cout<<"O número informado foi "<<numero<<"\n";

    return 0;
}
