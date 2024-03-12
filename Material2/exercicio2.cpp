#include <iostream>
#include <locale>

using namespace std;

#define NOTAS 20

int main()
{
    /*
    Escreva um programa em C++ que permita a leitura das notas de uma
    turma de 20 alunos. Calcular a m�dia da turma e contar quantos alunos
    obtiveram nota acima desta m�dia calculada. Escrever a m�dia da turma
    e o resultado da contagem.
    */
    setlocale(LC_ALL, "Portuguese");
    float vetor[NOTAS], soma, media;
    int aluno = 0;
    for(int i = 0; i < NOTAS; i++){
        cout << "Digite a nota " << i + 1 << ": ";
        cin >> vetor[i];
    }

    for(int i = 0; i < NOTAS; i++){
        soma += vetor[i];
    }

    media = soma / NOTAS;

    for(int i = 0; i < NOTAS; i++){
        if(vetor[i] >= media){
            aluno++;
        }
    }

    cout << "A m�dia � de: " << media << " e a quantidade de alunos que ficaram acima de m�dia foi de " << aluno;

}
