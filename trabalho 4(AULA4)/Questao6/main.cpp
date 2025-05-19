#include <iostream>

using namespace std;

int main()
{
    int soma,c;
    c=100;
    soma=100;
    do{
      c=c+1;
      if (c%2==0)
        soma=soma+c;
    }while(c<=200);
    cout<<"O resultado da soma é igual a "<<soma<<endl;
    return 0;
}
