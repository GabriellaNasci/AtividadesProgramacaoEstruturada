#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float raio,area,pi;
    pi=3.14;
    cout<<"Informe o valor do raio do c�rculo: \n";
    cin>>raio;
    area=pi*(raio*raio);
    cout<<"O valor da �rea deste c�rculo � igual a "<<area<< "\n";

    return 0;
}
