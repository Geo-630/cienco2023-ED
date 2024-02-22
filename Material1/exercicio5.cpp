#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float preco;
    int cond;
    cout << "Digite o preço do produto: ";
    cin >> preco;
    cout << "Escolha a opção de pagamento: \n"
            "1 - À vista em dinheiro ou cheque, com 10% de desconto \n"
            "2 - À vista com cartão de crédito, com 5% de desconto \n"
            "3 - Em 2 vezes, preço normal de etiqueta sem juros \n"
            "4 - Em 3 vezes, preço de etiqueta com acrésimo de 10% \n";
    cin >> cond;

    switch(cond){
        case 1:
            cout << "À vista em dinheiro ou cheque, o preço será: " << preco * 0.9;
            break;
        case 2:
            cout << "À vista com cartão de crédito, o preço será: " << preco * 0.95;
            break;
        case 3:
            cout << "Em duas vezes, o preço será: " << preco / 2 << " por mês";
            break;
        case 4:
            cout << "Em três vezes, o preço será: " << (preco * 1.1) / 3 << " por mês";
            break;
        default:
            cout << "Opção não reconhecida";
    }

}
