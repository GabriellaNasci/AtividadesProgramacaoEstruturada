#include <iostream>
#include <locale>

using namespace std;

int main()
{
   setlocale(LC_ALL,"Portuguese");
   int n;
   cout<<"Informe um número inteiro qualquer positivo: "<<endl;
   cin>>n;
   if ((n%2==0)&&(n>=0))
    cout<<"Este número é par!!"<<endl;
   else
   {if ((n%2!=0)&&(n>=0))
        cout<<"Este número é ímpar!!"<<endl;

     else
        cout<<"Este número não é positivo! Tente novamente!"<<endl;
   }
   return 0;


}
