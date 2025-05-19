#include <iostream>
#include <locale>

using namespace std;

int main()
{
   //Faça um programa em C++ que pergunte um valor em graus Fahrenheit e imprime na tela o correspondente em Celsius usando a seguinte fórmula:
   //	 					Celsius = (fahrenheit – 32) * (5.0/9.0).
   //OBS: Usar uma variável double ou float para ler o valor em Fahrenheit


   setlocale(LC_ALL,"Portuguese");
   float tempCel,tempFahre;
   cout<<"Qual a temperatura em graus Fahrenheit?"<<endl;
   cin>>tempFahre;
   tempCel=((tempFahre-32)*5)/9;
   cout<<"Essa temperatura em graus Celcius é igual a: "<< tempCel <<endl;

   return 0;
}
