#include <iostream>
#include <locale>

using namespace std;

int main()
{
   //Faça um programa em C++ que peça o nome de uma pessoa, a quantidade de quilômetros que ela andou de bicicleta
   //e o tempo gasto em minutos para percorrer essa distância. Mostre na tela uma mensagem como: “Olá Mário, você
   //percorreu 30 km em 65 minutos, sua velocidade média foi: 27.7.


   setlocale(LC_ALL,"Portuguese");
   char nome[30];
   float km,tempo, vm;
   cout<<"Digite o seu nome: \n";
   cin>>nome;
   cout<<"Digite quantos Kilometros você andou de bicicleta: \n";
   cin>>km;
   cout<<"Digite o tempo gasto em minutos para percorrer essa distancia: \n";
   cin>>tempo;
   vm=km/(tempo/60);
   cout<<"Olá "<<nome<<",você percorreu "<<km<<"km em "<<tempo<<" minutos. Sua velocidade média foi: "<< vm;
   return 0;


}
