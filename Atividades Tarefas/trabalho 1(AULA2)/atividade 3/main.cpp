#include <iostream>
#include <locale>

using namespace std;

int main()
{
   //Fa�a um programa em C++ que pergunte um valor em graus Fahrenheit e imprime na tela o correspondente em Celsius usando a seguinte f�rmula:
   //	 					Celsius = (fahrenheit � 32) * (5.0/9.0).
   //OBS: Usar uma vari�vel double ou float para ler o valor em Fahrenheit


   setlocale(LC_ALL,"Portuguese");
   float tempCel,tempFahre;
   cout<<"Qual a temperatura em graus Fahrenheit?"<<endl;
   cin>>tempFahre;
   tempCel=((tempFahre-32)*5)/9;
   cout<<"Essa temperatura em graus Celcius � igual a: "<< tempCel <<endl;

   return 0;
}
