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
    cout<<"  Qual � o seu nome: ";
    cin>>nome;
    cout<<endl;
    cout<<"  Quantos irm�os voc� t�m? ";
    cin>>irmaos;
    cout<<endl;
    cout<<"  Qual � a sua idade? ";
    cin>>idade;
    ano=2025-idade;
    cout<<"Ent�o voc� se chama "<<nome<<", tem "<<irmaos<<" irm�os, e nasceu em "<<ano<<"?"<<endl;
    return 0;
}
