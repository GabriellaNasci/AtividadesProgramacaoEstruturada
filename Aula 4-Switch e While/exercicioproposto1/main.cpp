#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char opc;
    float num1,num2,soma,subtracao;
    cout<<"Escolha uma op��o: "<<endl;
    cout<<"Digite + para Somar dois n�meros "<<endl;
    cout<<"Digite - para Subtrair dois n�meros"<<endl;
    cout<<"Digite S para Sair."<<endl;
    cin>>opc;
    cout<<"Digite o primeiro n�mero: "<<endl;
    cin>> num1;
    cout<<"Digite o segundo n�mero: "<<endl;
    cin>>num2;
    opc=toupper(opc);


    switch (opc)
      {case '+':
           soma=num1+num2;
           cout<<"A soma � igual a "<<soma<<endl;
       break;
       case '-':
           subtracao=num1-num2;
           cout<<"A subtra��o � igual a "<<subtracao<<endl;
       break;
       case 'S':
          cout<<"Fim do programa."<<endl;
       break;
       default:
          cout<<"Op��o inv�lida."<<endl;
      }
      return 0;


}
