#include <iostream>
#include <locale>

using namespace std;

int main()
{
    /*
    Fa�a um programa em C++ que receba o n�mero de horas trabalhadas e o valor do sal�rio
    m�nimo. Calcule e mostre o sal�rio a receber seguindo as regras abaixo:
    a. A hora trabalhada vale a metade do sal�rio m�nimo;
    b. O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada
    c. O imposto equivale a 3% do sal�rio bruto;
    d. O sal�rio a receber equivale ao sal�rio bruto menos o imposto.
    */
    setlocale(LC_ALL, "Portuguese");
    float salario, aux, res, impo;
    int hora;
    cout << "Digite o n�mero de horas trabalhadas: " << endl;
    cin >> hora;
    cout << "Digite valor do sal�rio m�nimo: " << endl;
    cin >> salario;

    aux = hora * (salario / 2);

    impo = aux * 0.03;

    res = aux - impo;
    cout << "O sal�rio ao receber vai ser: " << res;
}
