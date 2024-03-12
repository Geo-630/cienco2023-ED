#include <iostream>
#include <locale>

using namespace std;

#define TAMANHO 10

int main()
{
    /*
    Ler um vetor A de 10 números. Após, ler mais um número e guardar em
    uma variável X. Armazenar em um vetor M o resultado de cada
    elemento de A multiplicado pelo valor X. Logo após, imprimir o vetor M.
    */
    setlocale(LC_ALL, "Portuguese");

    int vetorA[TAMANHO], vetorM[TAMANHO], mult;

    for(int i = 0; i < TAMANHO; i++)
    {
            cout << "Insira um número: ";
            cin >> vetorA[i];
    }
    cout << "Digite variável multiplicativa: ";
    cin >> mult;

    for(int i = 0; i < TAMANHO; i++)
    {
            vetorM[i] = vetorA[i] * mult;
            cout << vetorM[i] << endl;
    }

}
