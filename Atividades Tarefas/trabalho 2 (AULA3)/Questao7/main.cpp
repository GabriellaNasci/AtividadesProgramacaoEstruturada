#include <iostream>
#include <locale>
using namespace std;

int main()
{
   setlocale(LC_ALL,"Portuguese");
   float lado,area,areaFinal;
   cout<<"Informe qual o valor do lado do quadrado: \n";
   cin>>lado;
   area=lado*lado;
   areaFinal=area*2;
   cout<<"O dobro da área deste quadrado é igual a "<<areaFinal<<"\n";

   return 0;


}
