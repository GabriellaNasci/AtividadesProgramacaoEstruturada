#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num,c;
    char opc;
    num=1;
    opc='S';

    do
    {cout<<"Voc� deseja imprimir uma Tabuada?"<<endl;
     cout<<"Digite: (S- para SIM) ou (N- para N�O): "<<endl;
     cin>>opc;
     opc=toupper(opc);
     switch (opc)
      {case 'S':
         {cout<<"Informe um n�mero para que seja apresentada a Tabuada: ";
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
                cout<<"N�mero inv�lido"<<endl<<endl;
          }
        break;
        default:
           return 0;
      }
    } while (opc='S');


}
