#include <iostream>
#include <iomanip>
//include <locale>

using namespace std;

int main(int argc, char** argv)
    //setlocale(LC_ALL,"Portuguese");
{
    float num1,num2,num3,soma,subtracao,divisao,multiplicacao;
    int resto,num4,num5;
    cout<<"Esse programa irá executar algumas operações matemáticas. "<<endl;
    cout<<"Cinco números serão necessários. "<<endl<<endl;
    cout<<"Digite o primeiro número: "<<endl;
    cin>>num1;
    cout<<"Digite o segundo número: "<<endl;
    cin>>num2;
    cout<<"Digite o terceiro número: "<<endl;
    cin>>num3;
    cout<<"Digite o quarto número: "<<endl;
    cin>>num4;
    cout<<"Digite o quinto número: "<<endl;
    cin>>num5;
    soma=num1+num2;
    cout<<"A soma do primeiro e segundo número pe: "<<soma<<endl;
    subtracao=num3-num4;
    cout<<"A subtração do terceiro e quarto número é: "<<subtracao<<endl;
    divisao=num2/num1;
    cout<<"A divisão do segundo número pelo primeiro número é: "<<divisao<<endl;
    multiplicacao=num1*num2;
    cout<<"A multiplicação entre o primeiro número e o segundo número é: "<<multiplicacao<<endl;
    resto=num4%num5;
    cout<<"O resto da divisão entre o quarto número pelo quinto número é: "<<resto<<endl;

    return 0;
}
