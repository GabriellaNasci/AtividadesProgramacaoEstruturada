#include <iostream>
#include <locale>
using namespace std;

/* fun��o que retorna o maior valor entre x, y e z
*/

int acheMaior (int a, int b, int c)
{int maior;
/*Assume inicialmente que a variavel 'x' tem o maior valor: */
maior = a;
/* somente muda o valor da 'maior' se os valores em 'y' ou 'z' forem maiores' */
if(b>maior){
    maior = b;
}
if(c>maior){
    maior = c;
}
return maior;

}

int main()
{
  setlocale(LC_ALL,"Portuguese");

  int primeiro,segundo,terceiro,x,y,z,maior_1,maior_2;

  /*L� o primeiro conjunto de 3 valores */

  cout<<"Digite o primeiro conjunto de tr�s n�meros inteiros: ";
  cin>>primeiro>>segundo>>terceiro;

  /*Verifica o maior dos tr�s valores informados */
  maior_1 = acheMaior(primeiro,segundo,terceiro);

  /*Nesse ponto do programa, maior_1 cont�m o maior valor
  dentre os 3 primeiros valores informados */

  /*L� o segundo conjunto de 3 valores */
  cout<<"Digite o segundo conjunto de tr�s n�meros inteiros: ";
  cin>>x>>y>>z;

  /*Verifica o maior dos tr�s valores informados */
  /*Usa a mesma fun��o, pois o procedimento para encontrar o maior valor do 3 numeros e o maior*/
  maior_2=acheMaior(x,y,z);

  /*Nesse ponto do programa, maior_3 cont�m o maior valor
  dentre os 3 primeiros valores informados */

  /*calcula e exibe a soma solicitada*/

  cout<<endl<<maior_1<<"+"<<maior_2<<" = "<<maior_1+maior_2<<endl;


}
