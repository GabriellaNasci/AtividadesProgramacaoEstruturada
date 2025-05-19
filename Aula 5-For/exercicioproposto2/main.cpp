#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Fazer um programa, para imprimir os múltiplos de 3 entre 3 até 100;


    int i;
    for( i=3 ; i<=100 ; i+=3 )
        cout<<setw(5)<<i<<endl;
    return 0;



}
