#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num,i,soma,q;
    float media;
    soma=0;
    for(i=1;i<=20;i++)
       { cout << "Informe o "<<i<<"o. n�mero:" << endl;
         cin>>num;
         if (num%2==0)
           {soma+=num;
            q+=1;
           }
       }
    media=soma/q;
    cout<<"A m�dia final entre os n�meros pares � igual a: "<<media<<endl;
    return 0;
}
