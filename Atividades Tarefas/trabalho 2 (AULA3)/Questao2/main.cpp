#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero;
    cout << "Informe um n�mero: \n";
    cin>>numero;
    cout<<"O n�mero informado foi "<<numero<<"\n";

    return 0;
}
