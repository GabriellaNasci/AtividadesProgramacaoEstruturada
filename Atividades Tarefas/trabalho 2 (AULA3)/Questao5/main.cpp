#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL,"Portuguese");
  float metros,centimetros;
  cout<<"Informe a distancia em metros: \n";
  cin>>metros;
  centimetros=metros*100;
  cout<<"A dist�ncia de "<<metros<<" metros em cent�metros � igual a "<<centimetros<<" cm";
  return 0;
}
