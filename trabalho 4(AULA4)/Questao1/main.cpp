#include <iostream>
#include <locale>
using namespace std;

int main()
{
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
