#include <iostream>
#include <locale>

using namespace std;

#define TAMANHO 10

int main()
{
    /*
    Ler um vetor A de 10 n�meros. Ap�s, ler mais um n�mero e guardar em
    uma vari�vel X. Armazenar em um vetor M o resultado de cada
    elemento de A multiplicado pelo valor X. Logo ap�s, imprimir o vetor M.
    */
    setlocale(LC_ALL, "Portuguese");

    int vetorA[TAMANHO], vetorM[TAMANHO], mult;

    for(int i = 0; i < TAMANHO; i++)
    {
            cout << "Insira um n�mero: ";
            cin >> vetorA[i];
    }
    cout << "Digite vari�vel multiplicativa: ";
    cin >> mult;

    for(int i = 0; i < TAMANHO; i++)
    {
            vetorM[i] = vetorA[i] * mult;
            cout << vetorM[i] << endl;
    }

}
