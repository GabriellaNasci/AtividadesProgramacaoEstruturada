#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tamanho,latas,preco;
    cout << "Informe o tamanho em metros quadrados (m�) da �rea a ser pintada: " << endl;
    cin>>tamanho;
    latas=tamanho/54;
    if (tamanho%54 != 0 )
        latas=latas+1;
    preco=latas*80;

    cout<<"A quantidade de latas necess�rias para pintar "<<tamanho<<"m� � igual a "<<latas<<endl;
    cout<<"O pre�o total a ser pago ser� de R$"<<preco<<endl;
    return 0;
}
