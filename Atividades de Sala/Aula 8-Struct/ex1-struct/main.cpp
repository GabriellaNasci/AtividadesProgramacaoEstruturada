#include <iostream>
#include <string>
//#define NALUNO
using namespace std;

int main()
{
   fflush(stdin);
     int NALUNO = 3;

      struct EstruturaAluno{
      char nome[60];
      char matricula [10];
      int anoIngresso;
      }strAluno[NALUNO];

      int i;
      for(i=0;i<NALUNO;i++){
        cout<<"Informe o nome do aluno:    ";
        cin.getline(strAluno[i].nome,60);
        cout<<"Informe a matrícula do aluno:    ";
        cin.getline(strAluno[i].matricula,10);
        cout<<"Informe o ano de ingresso do aluno:    ";
        cin>>strAluno[i].anoIngresso;
        cout<<endl;
        fflush(stdin);
      }
      for(i=0;i<NALUNO;i++){
        cout<<"Aluno: "<<strAluno[i].nome<<endl;
        cout<<"Matrícula: "<<strAluno[i].matricula<<endl;
        cout<<"Ano de Ingresso: "<<strAluno[i].anoIngresso<<endl<<endl<<endl;
      }

    return 0;
}
