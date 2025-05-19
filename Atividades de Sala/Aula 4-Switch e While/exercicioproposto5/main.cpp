#include <iostream>
#include <locale>
using namespace std;

int main()
{
   //Faça um programa para ler N números inteiros – informe um de cada vez.
   //A repetição será encerrada quando o usuário digitar o número 0.
   //O programa deve informar quantos números foram digitados.

   setlocale(LC_ALL,"Portuguese");
   int num,c=0;
   do {
   cout<<"Informe um número inteiro: \n";
   cin>>num;
    if(num!=0)
        c=c+1;
   }while(num!=0);
   cout<<"Foram digitados "<<c<<" números."<<endl;
   return 0;

}
