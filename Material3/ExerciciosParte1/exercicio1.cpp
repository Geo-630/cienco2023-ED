#include <iostream>
#include <string>

using namespace std;

struct Pacientes {
    string nome;
    int idade;
    string sintoma;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*
    1- Criar um programa que registre informa��es de v�rios
    pacientes, incluindo nome, idade e um sintoma espec�fico. O
    programa deve permitir a entrada de dados para m�ltiplos
    pacientes at� que o usu�rio decida parar.
    */
    Pacientes paciente;
    char opc;

    do{
        cout << "Nome do paciente: ";
        getline(cin, paciente.nome);
        cout << "Idade do paciente: ";
        cin >> paciente.idade;
        cin.ignore();
        cout << "Sintoma do paciente: ";
        getline(cin, paciente.sintoma);

        cout << "Nome: " << paciente.nome << ". Idade: " << paciente.idade << ". Sintoma: " << paciente.sintoma << endl;
        cout << "Dejesa colocar mais pacientes? (S/N) \n";
        cin >> opc;
        cin.ignore();

    }while(opc == 'S' || opc == 's');

}
