#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char opc;
    float num1,num2,soma,subtracao,divisao,multiplicacao;

    do {
    cout<<"Este programa tem o objetivo de realizar opera��es aritm�ticas entre dois n�meros "<<endl;
    cout<<"Escolha uma op��o: "<<endl;
    cout<<"Digite + para Soma "<<endl;
    cout<<"Digite - para Subtra��o"<<endl;
    cout<<"Digite / para Divis�o"<<endl;
    cout<<"Digite * para Multiplica��o"<<endl;
    cout<<"Digite S para Sair."<<endl;
    cin>>opc;
    opc=toupper(opc);

    switch (opc)
      {case '+':
           cout<<"Digite o primeiro n�mero: "<<endl;
           cin>> num1;
           cout<<"Digite o segundo n�mero: "<<endl;
           cin>>num2;
           soma=num1+num2;
           cout<<"A soma � igual a "<<soma<<endl;
       break;
       case '-':
           cout<<"Digite o primeiro n�mero: "<<endl;
           cin>> num1;
           cout<<"Digite o segundo n�mero: "<<endl;
           cin>>num2;
           subtracao=num1-num2;
           cout<<"A subtra��o � igual a "<<subtracao<<endl;
       break;
       case '/':
           cout<<"Digite o primeiro n�mero: "<<endl;
           cin>> num1;
           cout<<"Digite o segundo n�mero: "<<endl;
           cin>>num2;
           divisao=num1/num2;
           cout<<"A Divis�o � igual a "<<divisao<<endl;
       break;
       case '*':
           cout<<"Digite o primeiro n�mero: "<<endl;
           cin>> num1;
           cout<<"Digite o segundo n�mero: "<<endl;
           cin>>num2;
           multiplicacao=num1*num2;
           cout<<"A Multiplica��o � igual a "<<multiplicacao<<endl;
       break;
       case 'S':
          return 0;
       break;
       default:
          cout<<"Op��o inv�lida."<<endl;
      }
    }while(opc='S');
      return 0;


}
