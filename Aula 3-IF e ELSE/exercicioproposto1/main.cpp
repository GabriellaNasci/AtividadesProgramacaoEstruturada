#include <iostream>
#include<locale>

using namespace std;

int main()
{
  //Escreva um programa que recebe dois n�meros e retorna o maior deles.


  setlocale(LC_ALL,"Portuguese");
  int num1,num2;
  cout<<"Informe o primeiro n�mero: "; //<<endl;
  cin>>num1;
  cout<<"Informe o segundo n�mero: "; //endl;
  cin>>num2;
  if (num1>num2)
    cout<<"O maior n�mero � "<<num1;
  else
    cout<<"O maior n�mero � "<<num2;

  return 0;

  }
