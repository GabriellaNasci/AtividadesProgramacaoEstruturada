#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float raio,pi,area,perimetro;
    pi=3.14;
    cout << "Informe o valor do raio do c�rculo: " << endl;
    cin>>raio;
    perimetro=2*pi*raio;
    area=pi*(raio*raio);
    cout<<"O valor do per�metro desse c�rculo � igual a "<<perimetro<<endl;
    cout<<"O valor da �rea desse c�rculo � igual a "<<area<<endl;

    return 0;
}
