#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num1,num2,num3;
    bool resultado;
    cout<<"Operadores Relacionais"<<endl;
    cout<<"Digite 3 n�meros: "<<endl;
    cin>>num1>>num2>>num3;
    resultado=num1>num2;
    cout<<"O resultado da opera��o: n�mero 1 � maior que n�mero 2 �: "<<resultado<<endl;
    resultado=num2==num3;
    cout<<"O resultado da opera��o: n�mero 2 � igual ao n�mero 3 �: "<<resultado<<endl;
    resultado= num3!=num1;
    cout<<"O resultado da opera��o: n�mero 3 � diferente do n�mero 1 �: "<<resultado<<endl;

    return 0;
}
