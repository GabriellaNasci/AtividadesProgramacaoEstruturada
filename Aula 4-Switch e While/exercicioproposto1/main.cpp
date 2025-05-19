#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char opc;
    float num1,num2,soma,subtracao;
    cout<<"Escolha uma opção: "<<endl;
    cout<<"Digite + para Somar dois números "<<endl;
    cout<<"Digite - para Subtrair dois números"<<endl;
    cout<<"Digite S para Sair."<<endl;
    cin>>opc;
    cout<<"Digite o primeiro número: "<<endl;
    cin>> num1;
    cout<<"Digite o segundo número: "<<endl;
    cin>>num2;
    opc=toupper(opc);


    switch (opc)
      {case '+':
           soma=num1+num2;
           cout<<"A soma é igual a "<<soma<<endl;
       break;
       case '-':
           subtracao=num1-num2;
           cout<<"A subtração é igual a "<<subtracao<<endl;
       break;
       case 'S':
          cout<<"Fim do programa."<<endl;
       break;
       default:
          cout<<"Opção inválida."<<endl;
      }
      return 0;


}
