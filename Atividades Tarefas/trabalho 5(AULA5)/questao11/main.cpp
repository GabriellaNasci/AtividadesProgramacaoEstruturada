#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num,i,negativo;
    negativo=0;
    for (i=1;i<=15;i++)
      { cout << "Informe o "<<i<<"o. número: " << endl;
        cin>>num;
        if(num<0)
            negativo+=1;
      }
    cout<<"A quantidade de números negativos digitados foi: "<<negativo<<endl;
    return 0;
}
