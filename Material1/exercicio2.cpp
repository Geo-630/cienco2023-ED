#include <iostream>

using namespace std;

int main()
{
    /*
    Elaborar um programa em C++ em que dada a idade de um nadador, classifique-o em uma
    das seguintes categorias: infantil A (de 5 a 7 anos), infantil B (de 8 a 10 anos), juvenil A (de
    11 a 13 anos), juvenil B (14 a 17 anos) e senior (maior que 17 anos)
    */
    int idade;
    cout << "Digite a idade: " << endl;
    cin >> idade;

    if(idade >= 5 && idade <= 7)
    {
        cout << "Infantil A" << endl;
    }else if(idade >= 8 && idade <= 10)
    {
        cout << "Infatil B" << endl;
    }else if(idade >= 11 && idade <= 13)
    {
        cout << "Juvenil A" << endl;
    }else if(idade >= 14 && idade <= 17)
    {
        cout << "Juvenil B" << endl;
    }else if (idade > 17){
        cout << "Senior" << endl;
    }
}
