#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"Digite um número: "<<endl;
    cin>>n;
    cout<<"Digite um outro número que seja maior que o anterior: "<<endl;
    cin>>m;
    do{
      cout<<n<<endl;
      n=n+1;
    }while(n<=m);
}
