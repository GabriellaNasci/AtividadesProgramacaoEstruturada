#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[5],i;

    for(i=0;i<5;i++){
    cout << "Digite um n�mero para armazenar na posi��o: "<<i<<" do vetor." << endl;
    cin>>vetor[i];
    }

    return 0;
}
