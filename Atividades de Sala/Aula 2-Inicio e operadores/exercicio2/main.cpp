#include <iostream>
#include <locale>

using namespace std;

int main(int argc,char** argv)
{
    setlocale(LC_ALL,"Portuguese");
    float salario=1000;
    float comissao=5;
    float valorVendas,salarioFinal;
    cout<<"Digite o valor total de vendas no mês: ";
    cin>>valorVendas;
    salarioFinal=salario+((valorVendas * comissao)/100);
    cout<<"O salário final é: \n"<<salarioFinal<< " Reais.";
    return 0;

}
