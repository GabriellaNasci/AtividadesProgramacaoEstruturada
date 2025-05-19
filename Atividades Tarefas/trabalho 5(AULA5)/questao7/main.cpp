#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    int opc;
    float quantidade,valorProduto,valorFinal;
    string comida;
    setlocale(LC_ALL,"Portuguese");

    cout<<setw(7)<<" Especificação "<<setw(14)<<"Código"<<setw(10)<<"Preço"<<endl;
    cout<<setw(5)<<" Cachorro quente "<<setw(10)<<"100"<<setw(11)<<"9,20"<<endl;
    cout<<setw(5)<<" Bauru simples "<<setw(12)<<"101"<<setw(11)<<"12,00"<<endl;
    cout<<setw(5)<<" Bauru com ovo "<<setw(12)<<"102"<<setw(11)<<"13,00"<<endl;
    cout<<setw(5)<<" Hamburguer "<<setw(15)<<"103"<<setw(11)<<"10,00"<<endl;
    cout<<setw(5)<<" Cheeseburguer "<<setw(12)<<"104"<<setw(11)<<"12,00"<<endl;
    cout<<setw(5)<<" Refrigerante lata "<<setw(8)<<"105"<<setw(11)<<"5,00"<<endl;
    cout<<setw(5)<<" Água "<<setw(21)<<"106"<<setw(11)<<"3,00"<<endl;
    cout<<endl;
    cout<<"Informe o código da comida em que deseja, conforme a tabela acima: "<<endl;
    cin>>opc;

   switch (opc)
     {case 100:
       {valorProduto=9.20;
       comida="Cachorro Quente.";
       }
      break;
      case 101:
      {valorProduto=12.00;
       comida="Bauru Simples.";
      }
      break;
      case 102:
       {valorProduto=13.00;
       comida="Bauru com Ovo.";
       }
      break;
      case 103:
        {valorProduto=10.00;
        comida="Hamburguer.";
        }
      break;
      case 104:
        {valorProduto=12.00;
        comida="Cheeseburguer.";
      break;
      case 105:
        {valorProduto=5.00;
        comida="Refrigerante Lata.";
        }
      break;
      case 106:
        {valorProduto=3.00;
        comida="Água.";
        }
      break;
      default:
        {cout<<"Código inváido.";
        return 0;
        }
     }
    cout<<"Informe a quantidade do intem escolhido: ";
    cin>>quantidade;
    valorFinal=valorProduto*quantidade;
    cout<<"O íntem escolhido foi: "<<comida<<endl;
    cout<<"O valor final a ser pago será igual a R$"<<valorFinal<<endl;


return 0;

}
