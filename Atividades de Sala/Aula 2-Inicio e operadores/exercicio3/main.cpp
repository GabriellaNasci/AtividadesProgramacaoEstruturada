#include <iostream>
#include <iomanip>
//include <locale>

using namespace std;

int main(int argc, char** argv)
    //setlocale(LC_ALL,"Portuguese");
{
    float num1,num2,num3,soma,subtracao,divisao,multiplicacao;
    int resto,num4,num5;
    cout<<"Esse programa ir� executar algumas opera��es matem�ticas. "<<endl;
    cout<<"Cinco n�meros ser�o necess�rios. "<<endl<<endl;
    cout<<"Digite o primeiro n�mero: "<<endl;
    cin>>num1;
    cout<<"Digite o segundo n�mero: "<<endl;
    cin>>num2;
    cout<<"Digite o terceiro n�mero: "<<endl;
    cin>>num3;
    cout<<"Digite o quarto n�mero: "<<endl;
    cin>>num4;
    cout<<"Digite o quinto n�mero: "<<endl;
    cin>>num5;
    soma=num1+num2;
    cout<<"A soma do primeiro e segundo n�mero pe: "<<soma<<endl;
    subtracao=num3-num4;
    cout<<"A subtra��o do terceiro e quarto n�mero �: "<<subtracao<<endl;
    divisao=num2/num1;
    cout<<"A divis�o do segundo n�mero pelo primeiro n�mero �: "<<divisao<<endl;
    multiplicacao=num1*num2;
    cout<<"A multiplica��o entre o primeiro n�mero e o segundo n�mero �: "<<multiplicacao<<endl;
    resto=num4%num5;
    cout<<"O resto da divis�o entre o quarto n�mero pelo quinto n�mero �: "<<resto<<endl;

    return 0;
}
