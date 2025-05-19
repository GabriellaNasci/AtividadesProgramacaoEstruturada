#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float salario,filhos,somaSalario,somaFilhos,mediaSalario,mediaFilhos,maiorSalario;
    int i;
    for (i=1;i<=15;i++)
       {cout<<"----------------------------------------------------------"<<endl;
       cout<<"Habitante "<<i<<":"<<endl;
       cout<<"----------------------------------------------------------"<<endl;
       cout << "Informe o salário desse habitante: R$" << endl;
       cin>>salario;
       cout<<"Informe a quantidade de filhos que esse habitante tem: "<<endl;
       cin>>filhos;
        if (salario>maiorSalario)
            maiorSalario=salario;
       somaSalario+=salario;
       somaFilhos+=filhos;
       mediaSalario=somaSalario/15;
       mediaFilhos=somaFilhos/15;
       }
     cout<<"A média do salario entre os 15 habitante foi: R$"<<mediaSalario<<endl;
     cout<<"A média da quantidade de filhos entre os 15 habitantes foi: "<<mediaFilhos<<endl;
     cout<<"O maior salário entre os 15 habitantes foi: "<<maiorSalario<<endl;
    return 0;
}
