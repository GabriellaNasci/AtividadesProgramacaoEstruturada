#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");
    int num1,num2;
    cout << "Digite o primeiro n�mero: " << endl;
    cin>>num1;
    cout<<"Digite o segundo n�mero: "<<endl;
    cin>>num2;
    if (num1>num2)
        cout<<"O maior n�mero � igual a "<<num1;
    else
        cout<<"O maior n�mero � igual a "<<num2;

    return 0;
}
