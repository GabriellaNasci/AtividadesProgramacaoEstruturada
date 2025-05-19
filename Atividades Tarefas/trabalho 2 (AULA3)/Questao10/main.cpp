#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float valor,valorFinal;
    cout << "Informe um valor qualquer: " << endl;
    cin>>valor;
    valorFinal = valor*(12.0/100);
    cout<<"12% de "<<valor<<" é igual a "<<valorFinal<<endl;

    return 0;
}
