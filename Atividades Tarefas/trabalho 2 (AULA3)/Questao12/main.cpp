#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tamanho,latas,preco;
    cout << "Informe o tamanho em metros quadrados (m²) da área a ser pintada: " << endl;
    cin>>tamanho;
    latas=tamanho/54;
    if (tamanho%54 != 0 )
        latas=latas+1;
    preco=latas*80;

    cout<<"A quantidade de latas necessárias para pintar "<<tamanho<<"m² é igual a "<<latas<<endl;
    cout<<"O preço total a ser pago será de R$"<<preco<<endl;
    return 0;
}
