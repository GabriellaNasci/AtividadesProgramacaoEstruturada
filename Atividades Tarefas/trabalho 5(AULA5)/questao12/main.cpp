#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num,i,soma;
    float media;
    soma=0;
    for(i=1;i<=20;i++)
       { cout << "Informe o "<<i<<"o. n�mero positivo:" << endl;
         cin>>num;
         soma+=num;

       }
    media=soma/20;
    cout<<"A m�dia final entre os n�meros digitados � igual a: "<<media<<endl;
    return 0;
}
