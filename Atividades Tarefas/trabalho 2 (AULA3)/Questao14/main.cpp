#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");
    float peso,regulamento,excesso,multa;

    cout<<"Informe a quantidade de peixes(em kg) que foram pescados: "<<endl;
    cin>>peso;
    regulamento=50;
    excesso=peso-regulamento;
    cout<<"A quantidade de peixes pescados foi de "<< peso <<"kg"<<endl;
    if (excesso>0)
    {  multa=excesso*4;
       cout<<"A quantidade de peixes em excesso é igual a "<< excesso <<"kg"<<endl;
       cout<<"O valor da multa a ser paga será igual a R$"<< multa <<endl;
    }
    else
     cout<<"E não houve excedentes. Logo, não deverá pagar multa!"<<endl;

    return 0;
}
