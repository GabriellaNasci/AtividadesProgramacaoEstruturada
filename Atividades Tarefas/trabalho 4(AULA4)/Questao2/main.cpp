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
    cout<<"Este programa tem o objetivo de realizar operações aritméticas entre dois números "<<endl;
    cout<<"Escolha uma opção: "<<endl;
    cout<<"Digite + para Soma "<<endl;
    cout<<"Digite - para Subtração"<<endl;
    cout<<"Digite / para Divisão"<<endl;
    cout<<"Digite * para Multiplicação"<<endl;
    cout<<"Digite S para Sair."<<endl;
    cin>>opc;
    opc=toupper(opc);

    switch (opc)
      {case '+':
           cout<<"Digite o primeiro número: "<<endl;
           cin>> num1;
           cout<<"Digite o segundo número: "<<endl;
           cin>>num2;
           soma=num1+num2;
           cout<<"A soma é igual a "<<soma<<endl;
       break;
       case '-':
           cout<<"Digite o primeiro número: "<<endl;
           cin>> num1;
           cout<<"Digite o segundo número: "<<endl;
           cin>>num2;
           subtracao=num1-num2;
           cout<<"A subtração é igual a "<<subtracao<<endl;
       break;
       case '/':
           cout<<"Digite o primeiro número: "<<endl;
           cin>> num1;
           cout<<"Digite o segundo número: "<<endl;
           cin>>num2;
           divisao=num1/num2;
           cout<<"A Divisão é igual a "<<divisao<<endl;
       break;
       case '*':
           cout<<"Digite o primeiro número: "<<endl;
           cin>> num1;
           cout<<"Digite o segundo número: "<<endl;
           cin>>num2;
           multiplicacao=num1*num2;
           cout<<"A Multiplicação é igual a "<<multiplicacao<<endl;
       break;
       case 'S':
          return 0;
       break;
       default:
          cout<<"Opção inválida."<<endl;
      }
    }while(opc='S');
      return 0;


}
