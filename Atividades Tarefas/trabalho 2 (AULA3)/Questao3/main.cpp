#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num1,num2,soma;
    cout << "Informe o primeiro n�mero: \n";
    cin>>num1;
    cout<<"Informe o segundo n�mero: \n";
    cin>>num2;
    soma=num1+num2;
    cout<<"A soma de "<<num1<< " com "<<num2<< " � igual a "<< soma<< "\n";

    return 0;
}
