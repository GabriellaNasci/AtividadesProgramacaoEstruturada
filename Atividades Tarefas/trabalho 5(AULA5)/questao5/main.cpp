#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;
    cout << "Informe um n�mero: " << endl;
    cin>>num;
    if (num>=0)
        cout<<"Esse n�mero � positivo!!"<<endl;
    else
        cout<<"Esse n�mero � negativo!!"<<endl;
    return 0;
}
