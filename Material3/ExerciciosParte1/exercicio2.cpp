#include <iostream>
#include <string>

using namespace std;

struct Livros {
    string titulo;
    string autor;
    int ano;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*
    2- Desenvolver um programa que registre detalhes de livros em
    uma biblioteca, como t�tulo, autor e ano de publica��o. O
    programa deve continuar solicitando informa��es at� que um
    t�tulo de livro espec�fico seja inserido.
    */
    Livros livro;

    cout << "Digite N ou n no titulo para parar o programa." << endl << endl;

    do{
        cout << "T�tulo do livro: ";
        getline(cin, livro.titulo);
        if(livro.titulo == "n" || livro.titulo == "N"){break;}
        cout << "Nome do autor: ";
        getline(cin, livro.autor);
        cout << "Ano de publica��o: ";
        cin >> livro.ano;
        cin.ignore();

        cout << "T�tulo do livro: " << livro.titulo << ". Autor: " << livro.autor << ". Ano de publica��o: " << livro.ano << endl << endl;
    }while(1 == 1);




}
