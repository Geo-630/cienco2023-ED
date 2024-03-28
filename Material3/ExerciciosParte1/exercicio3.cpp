#include <iostream>
#include <string>

using namespace std;

struct Filmes {
    float enredo;
    float atuacao;
    float efeitos;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*
    3 - Construir um programa para avaliar filmes, pedindo ao
    usuário para avaliar diferentes aspectos como enredo, atuação e
    efeitos especiais. Calcule a média das notas avaliadas em
    enredo, atuação e efeitos especiais. O programa deve permitir a
    avaliação de vários filmes. O programa deve parar quando
    usuário não desejar mais continuar.
    */
    Filmes filme;
    char opc;
    int soma1 = 0, soma2 = 0, soma3 = 0;
    float cont = 0;

    do{
        cout << "Por favor, avalie o filme de 1(ruim) até 5(ótimo) nas seguintes características:" << endl;
        cout << "Enredo: ";
        cin >> filme.enredo;
        soma1 += filme.enredo;
        cout << "Atuação: ";
        cin >> filme.atuacao;
        soma2 += filme.atuacao;
        cout << "Efeitos Especiais: ";
        cin >> filme.efeitos;
        soma3 += filme.efeitos;
        cont++;
        cout << "Dejesa fazer a avaliação mais uma vez? (S/N)" << endl;
        cin >> opc;
    }while(opc == 's' || opc == 'S');


    cout << endl << " Média do enredo: " << soma1 / cont <<
                    "\n Média da atuação: " << soma2 / cont <<
                    "\n Média dos efeitos especiais: " << soma3 / cont;

}
