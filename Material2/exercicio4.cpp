#include <iostream>
#include <locale>

using namespace std;

#define TAM 20

int main()
{
    /*
    Faça um programa em C++ para ler 20 números e armazenar em um vetor.
    Após a leitura total dos 20 números, o algoritmo deve escrever esses 20
    números lidos na ordem inversa.
    */
    setlocale(LC_ALL, "Portuguese");
    int vetor[TAM];

    for(int i = 0; i < TAM; i++)
    {
        cout << "Insira um número: ";
        cin >> vetor[i];
    }

    for(int i = TAM - 1; i >= 0; i--)
    {
        cout << vetor[i] << " ";
    }

}
