#include <iostream>
#include <locale>

using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int golsSaoPaulo,golsPalmeiras;
   cout<<"\n*** placar São Paulo X Palmeiras ***\n";
   cout<<"Digite a quantidade de gols do São Paulo: ";
   cin>> golsSaoPaulo;
   cout<<"\nDigite a quantidade de gols do Palmeiras: ";
   cin>> golsPalmeiras;
   if (golsSaoPaulo > golsPalmeiras)
    cout<<"A festa é tricolor!!!\n";
   else
   {
     cout<<"A festa é dos porcos!!!\n";
     cout<<"SQN. Não adianta tentar enganar o computador!!!\n";
   }
   return 0;

}
