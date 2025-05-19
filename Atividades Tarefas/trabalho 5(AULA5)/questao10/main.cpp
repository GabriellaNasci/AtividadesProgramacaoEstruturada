#include <iostream>
#include <locale>
#include <iomanip>


using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matricula,i;
    float nota1,nota2,nota3,media;
    char conceito;
    string aproveitamento;
    cout<< "Informe o número da matrícula: " << endl;
    cin>>matricula;
    cout<<"Informe a primeira nota: "<<endl;
    cin>>nota1;
    cout<<"Informe a segunda nota: "<<endl;
    cin>>nota2;
    cout<<"Informe a terceira nota: "<<endl;
    cin>>nota3;
    media=(nota1+(nota2*2)+(nota3*3))/6;
    if(media>=9)
        {conceito='A';
        aproveitamento="APROVADO";
        }
    else
      {if((media>=7.5)&&(media<9))
        {conceito='B';
        aproveitamento="APROVADO";
        }
        else
         {if((media>=6)&&(media<7.5))
           {conceito='C';
            aproveitamento="APROVADO";
           }
          else
             {if((media>=4)&&(media<6))
                 {conceito='D';
                 aproveitamento="REPROVADO";
                 }
              else
                 {conceito='E';
                 aproveitamento="REPROVADO";
                 }
             }
        }
      }
    cout<<fixed<<setprecision(1)<<endl;
    cout<<"O número de matricula do aluno(a) é: "<<matricula<<endl;
    cout<<"A Média de Aproveitamento foi: "<<media<<endl;
    cout<<"O Conceito foi: "<<conceito<<endl;
    cout<<"Este aluno(a) foi: "<<aproveitamento<<endl;

    return 0;
}
