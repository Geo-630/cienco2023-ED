#include <iostream>
#include <locale>

using namespace std;

int main()
{
     setlocale(LC_ALL, "Portuguese");
    /*
     7. Faça um programa em C++ que crie um vetor de 10 inteiros, coloque
     peça valores ao usuário e depois imprima todos os seus conteúdos na
     ordem normal e depois inversa. A impressão dos conteúdos deverá ser
     feita usando ponteiro.
    */

    int vetor[10];

    for(int i = 0; i < 10; i++)
    {
        cout << "Digite um número: ";
        cin >> vetor[i];
    }

    int *pVetor = &vetor[0];

    //Impressão em ordem normal
    for(int i = 0; i < 10; i++)
    {
     cout << *pVetor << " ";
     pVetor++;
    }

    cout << endl;

    //Impressão em ordem inversa
    pVetor--; // Por causa do ultimo pVetor++ o pVetor é = 1, temos que diminuir uma vez
    for(int i = 0; i < 10; i++)
    {
     cout << *pVetor << " ";
     pVetor--;
    }
}
