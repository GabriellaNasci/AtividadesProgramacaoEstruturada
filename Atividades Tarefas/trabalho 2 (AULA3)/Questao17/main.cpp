#include <iostream>
#include<locale>

using namespace std;

int main()
{
  setlocale(LC_ALL,"Portuguese");
  int num1,num2,num3,maior;
  cout<<"Informe o primeiro número: ";
  cin>>num1;
  cout<<"Informe o segundo número: ";
  cin>>num2;
  cout<<"Informe o terceiro número: ";
  cin>>num3;
  if ((num1>=num2) && (num1>=num3))
        maior=num1;
  else if ((num2>num1) && (num2>=num3))
        maior=num2;
  else if ((num3>num1) && (num3>num2))
        maior=num3;
  cout<<"O maior número é: "<<maior<<endl;

  return 0;

  }
