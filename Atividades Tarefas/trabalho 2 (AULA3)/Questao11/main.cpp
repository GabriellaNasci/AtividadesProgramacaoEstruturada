#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float salarioBruto,imposto,salarioLiquido;
    cout << "Informe o seu sal�rio: R$";
    cin>>salarioBruto;
    imposto=salarioBruto*(7.0/100);
    salarioLiquido= salarioBruto-imposto;
    cout<<"O seu sal�rio bruto � igual a R$"<<salarioBruto<<endl;
    cout<<"O valor de imposto que dever� ser pago ser� de R$"<<imposto<<endl;
    cout<<"O seu sal�rio l�quido final ser� de R$"<<salarioLiquido<<endl;

    return 0;
}
