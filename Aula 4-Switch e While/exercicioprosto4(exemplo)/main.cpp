#include <iostream>
#include <locale>
using namespace std;

int main()
{
    //Programa para ler um n�mero e exibir os 10 antecessores de tal n�mero.

    setlocale(LC_ALL,"Portuguese");
    int i=1,num;

    cout<<"Informe um n�mero: \n";
    cin>>num;
    cout<<"Os 10 antecessores de "<<num<< " s�o: \n";

    do{
      cout<<num-i<<endl;
      i=i+1;
    }while (i<=10);

    return 0;

}
