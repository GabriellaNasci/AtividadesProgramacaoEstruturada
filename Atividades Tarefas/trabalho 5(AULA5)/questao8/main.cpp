#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float altura,pesoIdeal;
    char genero;
    cout << "Informe a sua altura: " << endl;
    cin>>altura;
    cout<<"Informe seu gênero(M-Masculino; F-Feminino): "<<endl;
    cin>>genero;
    genero=toupper(genero);
    if(genero=='M')
        pesoIdeal=(72.7*altura)-58;
    else
        pesoIdeal=(62.1*altura)-44.7;
    cout<<"Para pessoa do sexo masculino: peso Ideal =  (72.7*altura)-58"<<endl;
    cout<<"Para pessoa do sexo feminino: peso Ideal =: (62.1*altura)-44.7"<<endl;
    cout<<endl;
    cout<<"o seu peso ideal é igual a "<<pesoIdeal<<"Kg"<<endl;
    return 0;
}
