#include <iostream>
#include <iomanip>
#include<locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    string nome;
    int irmaos,idade,ano;
    cout<<"        Bom dia..." << endl<<endl;
    cout<<"  Qual é o seu nome: ";
    cin>>nome;
    cout<<endl;
    cout<<"  Quantos irmãos você têm? ";
    cin>>irmaos;
    cout<<endl;
    cout<<"  Qual é a sua idade? ";
    cin>>idade;
    ano=2025-idade;
    cout<<"Então você se chama "<<nome<<", tem "<<irmaos<<" irmãos, e nasceu em "<<ano<<"?"<<endl;
    return 0;
}
