#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float nota1,nota2,nota3,nota4,media;
    cout<<"Informe a primeira nota: \n";
    cin>>nota1;
    cout<<"Informe a segunda nota: \n";
    cin>>nota2;
    cout<<"Informe a terceira nota: \n";
    cin>>nota3;
    cout<<"Informe a quarta nota: \n";
    cin>>nota4;
    media=(nota1+nota2+nota3+nota4)/4;
    cout<<"A média final desse aluno é igual a "<<media;

    return 0;
}
