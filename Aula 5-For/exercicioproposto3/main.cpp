#include <iostream>

using namespace std;

int main()
{
    //Programa para apresentar a m�dia de 10 notas


    int i;
    float nota,soma,media;
    for (i=1;i<=10;i++)
    {  cout<<"Escreva a "<<i<<"a. nota."<<endl;
       cin>>nota;
       soma+=nota;
    }
    media=soma/10;
    cout<<"A m�dia � igual a "<<media<<endl;
}
