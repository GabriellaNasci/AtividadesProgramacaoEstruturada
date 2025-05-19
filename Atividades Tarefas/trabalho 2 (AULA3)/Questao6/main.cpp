#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float raio,area,pi;
    pi=3.14;
    cout<<"Informe o valor do raio do círculo: \n";
    cin>>raio;
    area=pi*(raio*raio);
    cout<<"O valor da área deste círculo é igual a "<<area<< "\n";

    return 0;
}
