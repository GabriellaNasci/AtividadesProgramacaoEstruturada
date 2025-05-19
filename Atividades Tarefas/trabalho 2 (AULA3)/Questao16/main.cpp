#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float nota1,nota2,media;
    cout << "Digite a primeira nota: " << endl;
    cin>>nota1;
    cout<<"Digite a segunda nota: "<<endl;
    cin>>nota2;
    media=(nota1+nota2)/2;
    if((media>=7)&&(media<10))
            cout<<"Aprovado"<<endl;
    else
    { if (media<7)
         cout<<"Reprovado"<<endl;
      else
         if (media=10)
             cout<<"Aprovado com Distinção"<<endl;
    }
    return 0;
}
