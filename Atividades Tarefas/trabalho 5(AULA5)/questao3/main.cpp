#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float raio,pi,area,perimetro;
    pi=3.14;
    cout << "Informe o valor do raio do círculo: " << endl;
    cin>>raio;
    perimetro=2*pi*raio;
    area=pi*(raio*raio);
    cout<<"O valor do perímetro desse círculo é igual a "<<perimetro<<endl;
    cout<<"O valor da área desse círculo é igual a "<<area<<endl;

    return 0;
}
