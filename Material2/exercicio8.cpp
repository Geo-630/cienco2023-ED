#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*
    8. Escreva um programa em C++ que crie um array de 5 inteiros, preencha-o
    com valores fornecidos pelo usu�rio e, em seguida, calcule a m�dia dos
    valores usando ponteiros.

    Dica: para calcular a m�dia, some todos os valores do array e divida o
    resultado pelo n�mero de elementos no array.
    */

    int array[5];
    for(int i = 0; i < 5; i++)
    {
        cout << "Digite um n�mero: ";
        cin >> array[i];
    }

    int soma = 0;
    int *pArray = &array[0];

    for(int i = 0; i < 5; i++)
    {
        soma += *pArray;
        pArray++;
    }

    cout << endl << "A m�dia � de: " << soma / 5;
}
