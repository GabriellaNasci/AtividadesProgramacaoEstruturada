#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    string nomeProduto;
    float valorProduto,desconto,acrescimo, valorFinal;
    int opc;
    cout << "Qual � o produto? ";
    cin>>nomeProduto;
    cout<<endl;
    cout<<"Qual o valor do produto? ";
    cin>>valorProduto;
    cout<<"\nDe acordo com o menu abaixo, informe como deseja pagar: "<<endl;
    cout<<"1 - pagamento � vista (10% desconto). "<<endl;
    cout<<"2 - pagamento com 30 dias de prazo (sem desconto). "<<endl;
    cout<<"3 - pagamento em 10X (Cart�o de cr�dito - sem desconto - sem acr�scimo)."<<endl;
    cout<<"4 - pagamento em 10X (Boleto - 10% acr�scimo)."<<endl;
    cin>>opc;

   switch (opc)
    {case 1:
       { desconto=(valorProduto*(10.0/100));
         valorFinal=valorProduto-desconto;
         cout<<"O valor do produto com desconto �: "<<valorFinal<<".";
       }
       break;
     case 2:
       {cout<<"O valor do produto para pagamento com 30 dias �: "<<valorProduto<<".";
       }
      break;
     case 3:
        {cout<<"O valor do produto em 10X no cart�o �: "<<valorProduto<<".";
        }
     break;
     case 4:
        {acrescimo=valorProduto*(10.0/100);
         valorFinal=valorProduto+acrescimo;
         cout<<"O valor do produto em 10X no boleto �: "<<valorFinal<<".";
        }
     break;
     default:
        cout<<"Op��o inv�lida!!!";
    }

    return 0;
}
