#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"Digite um n�mero: "<<endl;
    cin>>n;
    cout<<"Digite um outro n�mero que seja maior que o anterior: "<<endl;
    cin>>m;
    do{
      cout<<n<<endl;
      n=n+1;
    }while(n<=m);
}
