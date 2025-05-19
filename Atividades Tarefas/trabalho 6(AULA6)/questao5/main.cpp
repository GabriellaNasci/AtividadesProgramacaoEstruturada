#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
  setlocale(LC_ALL,"Portuguese");
  float num,maior,menor;
  menor=pow(10,9999);
  int c;
  for(c=1;c<=3;c++)
  { cout<<"Informe um número: ";
    cin>>num;
      if(num>maior)
        maior=num;
      if(num<menor)
        menor=num;
  }
  cout<<"O maior número digitado foi: "<<maior<<"."<<endl;
  cout<<"O menor número digitado foi: "<<menor<<"."<<endl;


  return 0;
}
