#include <iostream>
#include <locale>
using namespace std;

int main()
{
   setlocale(LC_ALL,"Portuguese");
   float salarioHora,horasTrabalhadas,salarioFinal;
   cout<< "Informe o valor que voc� ganha por hora trabalhada: \n";
   cin>>salarioHora;
   cout<<"Informe o n�mero de horas trabalhadas no m�s: \n";
   cin>>horasTrabalhadas;
   salarioFinal=salarioHora*horasTrabalhadas;
   cout<<"O valor total de seu sal�rio no referido m�s � igual a R$"<<salarioFinal<<"\n";

   return 0;


}
