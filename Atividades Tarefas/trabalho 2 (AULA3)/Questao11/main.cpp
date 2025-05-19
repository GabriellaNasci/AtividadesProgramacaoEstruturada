#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float salarioBruto,imposto,salarioLiquido;
    cout << "Informe o seu salário: R$";
    cin>>salarioBruto;
    imposto=salarioBruto*(7.0/100);
    salarioLiquido= salarioBruto-imposto;
    cout<<"O seu salário bruto é igual a R$"<<salarioBruto<<endl;
    cout<<"O valor de imposto que deverá ser pago será de R$"<<imposto<<endl;
    cout<<"O seu salário líquido final será de R$"<<salarioLiquido<<endl;

    return 0;
}
