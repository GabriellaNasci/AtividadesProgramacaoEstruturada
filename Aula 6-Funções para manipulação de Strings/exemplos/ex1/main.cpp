#include <iostream>
#include <windows.h>
#include <cstring>
//#include <locale>
using namespace std;

int main()
{
    //Fazer um programa para solicitar o nome completo de uma pessoa, 3 notas e gerar sua média.


    //setlocale (LC_ALL,"Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    string nome;
    int c;
    float nota,soma,media;
    cout << "Informe seu nome completo: " << endl;
    getline(cin,nome);
    for (c=1;c<=3;c++)
      {cout<<"Informe a "<<c<<"a. nota: "<<endl;
       cin>>nota;
       soma+=nota;
      }
   media=soma/3;
   cout<<"Olá, "<<nome<<"."<<endl;
   cout<<"A sua média foi: "<< media<<endl;
    return 0;
}



//int nota1,nota2,nota3;
//media=(float(nota 1+nota2+nota3)/3
