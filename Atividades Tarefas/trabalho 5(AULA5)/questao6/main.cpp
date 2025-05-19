#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;
    cout << "Informe um número: " << endl;
    cin>>num;
    if (num>0)
        cout<<"Esse número é positivo!!"<<endl;
    else
     {if (num<0)
        cout<<"Esse número é negativo!!"<<endl;
      else
        cout<<"Zero!!"<<endl;
     }
    return 0;
}
