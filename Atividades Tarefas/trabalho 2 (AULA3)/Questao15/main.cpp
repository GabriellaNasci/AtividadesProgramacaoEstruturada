#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero;
    cout<< "Digite um número: "<< endl;
    cin>>numero;
    if (numero>=0)
       cout<<"O número "<<numero<< " é um número positivo"<<endl;
    else
       cout<<"O número "<<numero<< " é um número negativo"<<endl;
    return 0;
}
