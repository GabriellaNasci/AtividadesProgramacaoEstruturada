#include <iostream>
#include <locale>
using namespace std;

int main()
{
    //Programa para ler um número e exibir os 10 antecessores de tal número.

    setlocale(LC_ALL,"Portuguese");
    int i=1,num;

    cout<<"Informe um número: \n";
    cin>>num;
    cout<<"Os 10 antecessores de "<<num<< " são: \n";

    do{
      cout<<num-i<<endl;
      i=i+1;
    }while (i<=10);

    return 0;

}
