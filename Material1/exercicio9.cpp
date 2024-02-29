#include <iostream>
#include <locale>

using namespace std;

int main()
{
    /*
    Faça um programa em C++ que leia dez conjuntos de dois valores, o primeiro
    representando o número do aluno e o segundo a sua altura em centímetros. Encontre o
    aluno mais alto e o mais baixo. Exiba o número do aluno mais baixo o número de aluno
    mais alto e as respectivas alturas.
    */
    setlocale(LC_ALL, "Portuguese");

    int num[9], alt[9];
    int alto = 0, baixo = 1000, alunoAlto, alunoBaixo;

    for(int i = 0; i < 10; i++)
    {
        cout << "Digite o número do aluno: ";
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

    cout << "O aluno mais baixo é o número: " << alunoBaixo << " e sua altura é: " << baixo << "cm" << endl;
    cout << "O aluno mais alto é o número: " << alunoAlto << " e sua altura é: " << alto << "cm" << endl;
}
