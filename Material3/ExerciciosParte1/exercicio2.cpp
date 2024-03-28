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
    uma biblioteca, como título, autor e ano de publicação. O
    programa deve continuar solicitando informações até que um
    título de livro específico seja inserido.
    */
    Livros livro;

    cout << "Digite N ou n no titulo para parar o programa." << endl << endl;

    do{
        cout << "Título do livro: ";
        getline(cin, livro.titulo);
        if(livro.titulo == "n" || livro.titulo == "N"){break;}
        cout << "Nome do autor: ";
        getline(cin, livro.autor);
        cout << "Ano de publicação: ";
        cin >> livro.ano;
        cin.ignore();

        cout << "Título do livro: " << livro.titulo << ". Autor: " << livro.autor << ". Ano de publicação: " << livro.ano << endl << endl;
    }while(1 == 1);




}
