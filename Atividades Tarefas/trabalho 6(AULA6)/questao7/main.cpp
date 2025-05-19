#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num,c;
    num=1;
    cout<<"Informe um número para que seja apresentada a Tabuada: ";
    cin>>num;

    if((num>=1)&&(num<=9))
    {  cout<<endl<<endl<<endl;
       cout<<"Tabuada do "<<num<<endl;
       cout<<"******************"<<endl;
       for (c=1;c<=10;c++)
        { cout<<c<<" X "<<num<<" = "<< c*num<<endl;
        }
       cout<<"******************"<<endl<<endl;
    }
    else
      cout<<"Número inválido"<<endl<<endl;
    return 0;
}
