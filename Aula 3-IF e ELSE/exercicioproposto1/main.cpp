#include <iostream>
#include<locale>

using namespace std;

int main()
{
  //Escreva um programa que recebe dois números e retorna o maior deles.


  setlocale(LC_ALL,"Portuguese");
  int num1,num2;
  cout<<"Informe o primeiro número: "; //<<endl;
  cin>>num1;
  cout<<"Informe o segundo número: "; //endl;
  cin>>num2;
  if (num1>num2)
    cout<<"O maior número é "<<num1;
  else
    cout<<"O maior número é "<<num2;

  return 0;

  }
