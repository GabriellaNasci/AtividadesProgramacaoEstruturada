#include <iostream>
#include <locale>

using namespace std;

int main()
{
   setlocale(LC_ALL,"Portuguese");
   int n;
   cout<<"Informe um n�mero inteiro qualquer positivo: "<<endl;
   cin>>n;
   if ((n%2==0)&&(n>=0))
    cout<<"Este n�mero � par!!"<<endl;
   else
   {if ((n%2!=0)&&(n>=0))
        cout<<"Este n�mero � �mpar!!"<<endl;

     else
        cout<<"Este n�mero n�o � positivo! Tente novamente!"<<endl;
   }
   return 0;


}
