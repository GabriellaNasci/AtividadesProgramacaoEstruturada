#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,j,m,n;
    cout<<"Os valores a serem digitados a seguir valerão para as duas matrizes."<<endl;
    cout<<"Informe a quantidade de linhas: "<<endl;
    cin>>m;
    cout<<"Informe a quantidade de colunas: "<<endl;
    cin>>n;
    int matriz1[m][n];
    int matriz2[m][n];
    int matrizSoma[m][n];
    cout<<endl;

    //Preenchimento da primeira matriz
    cout<<"*Preenchendo a primeira matriz("<<m<<"x"<<n<<"):"<<endl;
    cout<<endl;
    for(i=0;i<m;i++){
       for(j=0;j<n;j++){
         cout<<"Digite o valor para preencher a matriz ["<<i<<", "<<j<<"]:"<<endl;
         cin>>matriz1[i][j];

       }
    }
    cout<<endl;
    //preenchimento da segunda matriz
    cout<<"*Preenchendo a segunda matriz("<<m<<"x"<<n<<"):"<<endl;
    cout<<endl;
    for(i=0;i<m;i++){
       for(j=0;j<n;j++){
         cout<<"Digite o valor para preencher a matriz ["<<i<<", "<<j<<"]:"<<endl;
         cin>>matriz2[i][j];

       }
    }

    //Calculando a soma
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             matrizSoma[i][j]=matriz1[i][j]+matriz2[i][j];
             }
        cout<<endl;
    }




    //Mostrando os valores da matriz soma
    cout<<endl;
    cout<<"*A soma entre as duas matrizes anteriores é igual a: "<<endl;
    cout<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<matrizSoma[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
