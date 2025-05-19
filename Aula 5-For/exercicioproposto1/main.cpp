#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Fazer um programa, utilizando FOR, para apresentar a tabuada do 6 de forma decrescente.


    int i;
    for( i=10 ; i>=0 ; i-- )
        cout<< setw(5) << i << setw(10) << "X 6 = " << setw(15) << i*6 << endl;
    return 0;
}
