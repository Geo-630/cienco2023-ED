#include <iostream>
#include <locale>

using namespace std;

int main()
{
     setlocale(LC_ALL, "Portuguese");
    /*
     7. Fa�a um programa em C++ que crie um vetor de 10 inteiros, coloque
     pe�a valores ao usu�rio e depois imprima todos os seus conte�dos na
     ordem normal e depois inversa. A impress�o dos conte�dos dever� ser
     feita usando ponteiro.
    */

    int vetor[10];

    for(int i = 0; i < 10; i++)
    {
        cout << "Digite um n�mero: ";
        cin >> vetor[i];
    }

    int *pVetor = &vetor[0];

    //Impress�o em ordem normal
    for(int i = 0; i < 10; i++)
    {
     cout << *pVetor << " ";
     pVetor++;
    }

    cout << endl;

    //Impress�o em ordem inversa
    pVetor--; // Por causa do ultimo pVetor++ o pVetor � = 1, temos que diminuir uma vez
    for(int i = 0; i < 10; i++)
    {
     cout << *pVetor << " ";
     pVetor--;
    }
}
