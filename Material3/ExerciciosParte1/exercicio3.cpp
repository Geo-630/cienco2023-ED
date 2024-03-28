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
    usu�rio para avaliar diferentes aspectos como enredo, atua��o e
    efeitos especiais. Calcule a m�dia das notas avaliadas em
    enredo, atua��o e efeitos especiais. O programa deve permitir a
    avalia��o de v�rios filmes. O programa deve parar quando
    usu�rio n�o desejar mais continuar.
    */
    Filmes filme;
    char opc;
    int soma1 = 0, soma2 = 0, soma3 = 0;
    float cont = 0;

    do{
        cout << "Por favor, avalie o filme de 1(ruim) at� 5(�timo) nas seguintes caracter�sticas:" << endl;
        cout << "Enredo: ";
        cin >> filme.enredo;
        soma1 += filme.enredo;
        cout << "Atua��o: ";
        cin >> filme.atuacao;
        soma2 += filme.atuacao;
        cout << "Efeitos Especiais: ";
        cin >> filme.efeitos;
        soma3 += filme.efeitos;
        cont++;
        cout << "Dejesa fazer a avalia��o mais uma vez? (S/N)" << endl;
        cin >> opc;
    }while(opc == 's' || opc == 'S');


    cout << endl << " M�dia do enredo: " << soma1 / cont <<
                    "\n M�dia da atua��o: " << soma2 / cont <<
                    "\n M�dia dos efeitos especiais: " << soma3 / cont;

}
