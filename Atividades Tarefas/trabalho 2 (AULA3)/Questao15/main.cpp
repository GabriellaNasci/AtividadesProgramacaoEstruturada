#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero;
    cout<< "Digite um n�mero: "<< endl;
    cin>>numero;
    if (numero>=0)
       cout<<"O n�mero "<<numero<< " � um n�mero positivo"<<endl;
    else
       cout<<"O n�mero "<<numero<< " � um n�mero negativo"<<endl;
    return 0;
}
