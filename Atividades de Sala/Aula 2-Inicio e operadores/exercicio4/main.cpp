#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    bool num1,num2;
    cout<<"Operadores L�gicos"<<endl;
    cout<<"Digite 2 n�meros: "<<endl;
    cin>>num1>>num2;
    cout<<"A nega��o do primeiro n�mero �: "<<!num1<<endl;
    cout<<"A opera��o AND entre o primeiro e segundo n�mero �: "<<(num1&&num2)<<endl;
    cout<<"A opera��o OR entre o primeiro e segundo n�mero �: "<<(num1 || num2)<<endl;

}
