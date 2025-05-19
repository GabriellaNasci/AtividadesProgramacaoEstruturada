#include <iostream>

using namespace std;

int main()
{

    int i,j,m;
    cout<<"Informe qual o tamanho da matriz quadrada que deseja: "<<endl;
    cin>>m;
    cout<<endl;
    int matriz[m][m];

    //Preenchimento de matriz
    for(i=0;i<m;i++){
       for(j=0;j<m;j++){
         cout<<"Digite o valor para preencher a matriz ["<<i<<", "<<j<<"]:"<<endl;
         cin>>matriz[i][j];

       }
    }

    //Mostrando os valores na tela
    cout<<endl;
    cout<<"Valores da diagonal principal da matriz: "<<endl;
    cout<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(i==j)
            {cout<<matriz[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}
