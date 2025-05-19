#include <iostream>
#include <locale>
using namespace std;

int main()
{
    //Elaborar um algoritmo que seja capaz de armazenar 15 números inteiros em um vetor, imprimir cada número com
    //a informação se ele é par ou ímpar.


    setlocale(LC_ALL,"Portuguese");
    int vetor[15];
    int i;
    for (i=0; i<15; i++){
        cout<<"Informe o "<<(i+1) <<"o. número: "<<endl;
        cin>>vetor[i];
    }

    for(i=0;i<15;i++){
       if (vetor[i]%2==0)
       {cout<<"O "<<(i+1)<<"o. número de valor "<<vetor[i]<<" é par."<<endl;
       }
       else
       {cout<<"O "<<(i+1)<<"o. número de valor "<<vetor[i]<<" é ímpar."<<endl;

       }
    }
    return 0;
}
