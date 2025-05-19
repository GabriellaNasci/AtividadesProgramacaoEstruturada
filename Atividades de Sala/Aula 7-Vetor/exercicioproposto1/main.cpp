#include <iostream>
#include <locale>
using namespace std;

int main()
{
    //Fazer um programa que permita digitar o valor de N produtos. Calcular o valor da compra.


    setlocale(LC_ALL,"Portuguese");
    int i,qnt;
    float valorCompra=0;
    cout<<"Informe a quantidade de produtos a serem lançados: "<<endl;
    cin>>qnt;
    float valor[qnt];
    for (i=0;i<qnt;i++){
       cout<<"Informe o valor do "<<(i+1)<<"o. produto: "<<endl;
       cin>>valor[i];
       valorCompra+=valor[i];
    }
    cout<<"O preço final da compra é igual a R$"<<valorCompra<<endl;
    return 0;
}
