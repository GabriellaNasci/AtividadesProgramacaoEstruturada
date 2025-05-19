#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main()
{
    //Fazer uma struct com ao menos 6 variáveis para armazenar dados de X elementos da struct.
    //Deverá ser impresso na tela os dados de todos os elementos.


    fflush(stdin);
    setlocale(LC_ALL,"Portuguese");
      int passageiros;
      cout<<"Informe a quantidade de Passageiros:  ";
      cin>>passageiros;
      cin.ignore();
      cout<<endl;


    struct viagem{
      char nomePassageiro[60];
      char origem[60];
      char destino[60];
      int bagagens;
      char classe[3];
      int assento;

    }strviagem[passageiros];

    int i;
    for(i=0;i<passageiros;i++){
       fflush(stdin);
       cout<<"Informe o Nome do Passageiro: ";
       cin.getline(strviagem[i].nomePassageiro,60);
       fflush(stdin);
       cout<<"Informe a Origem da Viagem: ";
       cin.getline(strviagem[i].origem,60);
       fflush(stdin);
       cout<<"Informe o Destino da Viagem: ";
       cin.getline(strviagem[i].destino,60);
       fflush(stdin);
       cout<<"Informe a Quantidade de Bagagens: ";
       cin>>strviagem[i].bagagens;
       fflush(stdin);
       cout<<"Irá querer a Primeira Classe? (S/N)";
       cin.getline(strviagem[i].classe,3);
       fflush(stdin);
       cout<<" Informe o Número do Assento: ";
       cin>>strviagem[i].assento;

       cout<<endl;
       fflush(stdin);
    }

    fflush(stdin);
    for(i=0; i<passageiros;i++){
      cout<<"Passageiro(a):  "<<strviagem[i].nomePassageiro<<endl;
      cout<<"Origem:  "<<strviagem[i].origem<<endl;
      cout<<"Destino:  "<<strviagem[i].destino<<endl;
      cout<<"Quantidade de Bagagens:  "<<strviagem[i].bagagens<<endl;
      cout<<"Primeira Classe?  "<<strviagem[i].classe<<endl;
      cout<<"Assento: "<<strviagem[i].assento<<endl;
      cout<<endl<<endl;
    }

    return 0;
}
