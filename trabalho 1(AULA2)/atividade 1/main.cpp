#include <iostream>
#include <locale>

using namespace std;

int main()
{
   //Fa�a um programa em C++ que pe�a o nome de uma pessoa, a quantidade de quil�metros que ela andou de bicicleta
   //e o tempo gasto em minutos para percorrer essa dist�ncia. Mostre na tela uma mensagem como: �Ol� M�rio, voc�
   //percorreu 30 km em 65 minutos, sua velocidade m�dia foi: 27.7.


   setlocale(LC_ALL,"Portuguese");
   char nome[30];
   float km,tempo, vm;
   cout<<"Digite o seu nome: \n";
   cin>>nome;
   cout<<"Digite quantos Kilometros voc� andou de bicicleta: \n";
   cin>>km;
   cout<<"Digite o tempo gasto em minutos para percorrer essa distancia: \n";
   cin>>tempo;
   vm=km/(tempo/60);
   cout<<"Ol� "<<nome<<",voc� percorreu "<<km<<"km em "<<tempo<<" minutos. Sua velocidade m�dia foi: "<< vm;
   return 0;


}
