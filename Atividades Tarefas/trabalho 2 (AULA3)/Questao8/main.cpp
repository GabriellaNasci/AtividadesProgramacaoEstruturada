#include <iostream>
#include <locale>
using namespace std;

int main()
{
   setlocale(LC_ALL,"Portuguese");
   float salarioHora,horasTrabalhadas,salarioFinal;
   cout<< "Informe o valor que você ganha por hora trabalhada: \n";
   cin>>salarioHora;
   cout<<"Informe o número de horas trabalhadas no mês: \n";
   cin>>horasTrabalhadas;
   salarioFinal=salarioHora*horasTrabalhadas;
   cout<<"O valor total de seu salário no referido mês é igual a R$"<<salarioFinal<<"\n";

   return 0;


}
