#include <iostream>

using namespace std;

int main()
{
    //Escreva um programa para exibir os números divisíveis por 10 contidos no intervalo de 1 a 100.   Utilize a estrutura while.

    int c;
    c=1;
    while (c<=100)
      {  c=c+1;
         if (c%10==0)
            cout<<"Número: "<<c<<endl;
      }
    return 0;
}
