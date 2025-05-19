#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");
    int num1,num2;
    cout << "Digite o primeiro número: " << endl;
    cin>>num1;
    cout<<"Digite o segundo número: "<<endl;
    cin>>num2;
    if (num1>num2)
        cout<<"O maior número é igual a "<<num1;
    else
        cout<<"O maior número é igual a "<<num2;

    return 0;
}
