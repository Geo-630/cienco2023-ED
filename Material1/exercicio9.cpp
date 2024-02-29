#include <iostream>
#include <locale>

using namespace std;

int main()
{
    /*
    Fa�a um programa em C++ que leia dez conjuntos de dois valores, o primeiro
    representando o n�mero do aluno e o segundo a sua altura em cent�metros. Encontre o
    aluno mais alto e o mais baixo. Exiba o n�mero do aluno mais baixo o n�mero de aluno
    mais alto e as respectivas alturas.
    */
    setlocale(LC_ALL, "Portuguese");

    int num[9], alt[9];
    int alto = 0, baixo = 1000, alunoAlto, alunoBaixo;

    for(int i = 0; i < 10; i++)
    {
        cout << "Digite o n�mero do aluno: ";
        cin >> num[i];
        cout << "Digite a altura do aluno em centimetro: ";
        cin >> alt[i];
    }

    for(int i = 0; i < 10; i++)
    {
        if(alt[i] > alto){
            alto = alt[i];
            alunoAlto = num[i];
        }
        if(alt[i] < baixo){
            baixo = alt[i];
            alunoBaixo = num[i];
        }
    }

    cout << "O aluno mais baixo � o n�mero: " << alunoBaixo << " e sua altura �: " << baixo << "cm" << endl;
    cout << "O aluno mais alto � o n�mero: " << alunoAlto << " e sua altura �: " << alto << "cm" << endl;
}
