#include <iostream>
#include <locale>
using namespace std;

int main()
{
   //Fa�a um programa para ler N n�meros inteiros � informe um de cada vez.
   //A repeti��o ser� encerrada quando o usu�rio digitar o n�mero 0.
   //O programa deve informar quantos n�meros foram digitados.

   setlocale(LC_ALL,"Portuguese");
   int num,c=0;
   do {
   cout<<"Informe um n�mero inteiro: \n";
   cin>>num;
    if(num!=0)
        c=c+1;
   }while(num!=0);
   cout<<"Foram digitados "<<c<<" n�meros."<<endl;
   return 0;

}
