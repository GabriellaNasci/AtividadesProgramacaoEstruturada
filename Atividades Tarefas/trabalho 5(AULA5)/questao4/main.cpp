#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    float valorProduto,desconto,valorFinal;
    cout << "Informe o nome do produto: "<<endl;
    cin>>nome;
    cout<<"Informe o valor desse produto: "<<endl;
    cin>>valorProduto;
    desconto=valorProduto*(13.0/100);
    valorFinal=valorProduto-desconto;
    cout<<"Produto: "<<nome<<endl;
    cout<<"Valor: R$"<<valorProduto<<endl;
    cout<<"Desconto: R$"<<desconto<<endl;
    cout<<"Valor final: R$"<<valorFinal<<endl;
    return 0;
}
