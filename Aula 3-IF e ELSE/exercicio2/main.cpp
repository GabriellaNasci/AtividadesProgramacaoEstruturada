#include <iostream>
#include <locale>

using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int golsSaoPaulo,golsPalmeiras;
   cout<<"\n*** placar S�o Paulo X Palmeiras ***\n";
   cout<<"Digite a quantidade de gols do S�o Paulo: ";
   cin>> golsSaoPaulo;
   cout<<"\nDigite a quantidade de gols do Palmeiras: ";
   cin>> golsPalmeiras;
   if (golsSaoPaulo > golsPalmeiras)
    cout<<"A festa � tricolor!!!\n";
   else
   {
     cout<<"A festa � dos porcos!!!\n";
     cout<<"SQN. N�o adianta tentar enganar o computador!!!\n";
   }
   return 0;

}
