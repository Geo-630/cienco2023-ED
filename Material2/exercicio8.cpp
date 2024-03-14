#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*
    8. Escreva um programa em C++ que crie um array de 5 inteiros, preencha-o
    com valores fornecidos pelo usuário e, em seguida, calcule a média dos
    valores usando ponteiros.

    Dica: para calcular a média, some todos os valores do array e divida o
    resultado pelo número de elementos no array.
    */

    int array[5];
    for(int i = 0; i < 5; i++)
    {
        cout << "Digite um número: ";
        cin >> array[i];
    }

    int soma = 0;
    int *pArray = &array[0];

    for(int i = 0; i < 5; i++)
    {
        soma += *pArray;
        pArray++;
    }

    cout << endl << "A média é de: " << soma / 5;
}
