#include <iostream>
#include <locale>
using namespace std;

int main()
{
    //Elaborar um algoritmo que seja capaz de armazenar 15 n�meros inteiros em um vetor, imprimir cada n�mero com
    //a informa��o se ele � par ou �mpar.


    setlocale(LC_ALL,"Portuguese");
    int vetor[15];
    int i;
    for (i=0; i<15; i++){
        cout<<"Informe o "<<(i+1) <<"o. n�mero: "<<endl;
        cin>>vetor[i];
    }

    for(i=0;i<15;i++){
       if (vetor[i]%2==0)
       {cout<<"O "<<(i+1)<<"o. n�mero de valor "<<vetor[i]<<" � par."<<endl;
       }
       else
       {cout<<"O "<<(i+1)<<"o. n�mero de valor "<<vetor[i]<<" � �mpar."<<endl;

       }
    }
    return 0;
}
