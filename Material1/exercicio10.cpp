#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade = 1, oti = 0, reg = 0, ruim = 0, bom = 0, qtd = 0, cont = 1, idadeFinal = 0, opc = 0, total = 0;

    do{
        do{
            cout << "Qual sua idade?: ";
            cin >> idade;
        }while(idade <= 0);

        idadeFinal = idadeFinal + idade;

        do{
            cout << "Qual sua avalia��o do filme? Digite o n�mero\n"
            "1 - �timo \n"
            "2 - Bom \n"
            "3 - Regular \n"
            "4 - Ruim \n";
            cin >> opc;
        }while(opc <= 0 || opc >= 5);


    switch(opc){
    case 1:
        oti++;
        break;
    case 2:
        bom++;
        break;
    case 3:
        reg++;
        break;
    case 4:
        ruim++;
        break;
    }
    qtd++;

    cout << "Para fazer uma nova pesquisa digite 0, se n�o digite outro n�mero: ";
    cin >> cont;

    }while(cont != 0);

    total = oti + reg + ruim + bom;

    cout << "\n Quantidade de pessoas que responderam a pesquisa foi de: " << qtd << endl;
    cout << "A m�dia das idade foi de: " << idadeFinal / qtd << endl;
    cout << "Porcentagem de cada uma das avalia��es: \n"
            "�timo: " << (oti * 100) / total << "%\n"
            "Bom: " << (bom * 100) / total << "%\n"
            "Regular: " << (reg * 100) / total << "%\n"
            "Ruim: " << (ruim * 100) / total << "%";
}
