#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float preco;
    int cond;
    cout << "Digite o pre�o do produto: ";
    cin >> preco;
    cout << "Escolha a op��o de pagamento: \n"
            "1 - � vista em dinheiro ou cheque, com 10% de desconto \n"
            "2 - � vista com cart�o de cr�dito, com 5% de desconto \n"
            "3 - Em 2 vezes, pre�o normal de etiqueta sem juros \n"
            "4 - Em 3 vezes, pre�o de etiqueta com acr�simo de 10% \n";
    cin >> cond;

    switch(cond){
        case 1:
            cout << "� vista em dinheiro ou cheque, o pre�o ser�: " << preco * 0.9;
            break;
        case 2:
            cout << "� vista com cart�o de cr�dito, o pre�o ser�: " << preco * 0.95;
            break;
        case 3:
            cout << "Em duas vezes, o pre�o ser�: " << preco / 2 << " por m�s";
            break;
        case 4:
            cout << "Em tr�s vezes, o pre�o ser�: " << (preco * 1.1) / 3 << " por m�s";
            break;
        default:
            cout << "Op��o n�o reconhecida";
    }

}
