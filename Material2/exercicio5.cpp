#include <iostream>
#include <locale>

using namespace std;

int main()
{
    /*
    Fa�a um programa em C++ para ler um valor N qualquer (que ser� o
    tamanho dos vetores). Ap�s, ler dois vetores A e B (de tamanho N cada um)
    e depois armazenar em um terceiro vetor Soma a soma dos elementos do
    vetor A com os do vetor B (respeitando as mesmas posi��es) e escrever o
    vetor Soma.
    */
    setlocale(LC_ALL, "Portuguese");

    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vetorA[n], vetorB[n], vetorSoma[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Digite um n�mero para o primeiro vetor: ";
        cin >> vetorA[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << "Digite um n�mero para o segundo vetor: ";
        cin >> vetorB[i];
    }

    for(int i = 0; i < n; i++)
    {
        vetorSoma[i] = vetorA[i] + vetorB[i];
        cout << vetorA[i] << " + " << vetorB[i] << " = " << vetorSoma[i] << endl;
    }

}
