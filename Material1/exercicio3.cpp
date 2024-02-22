#include <iostream>
#include <locale>

using namespace std;

int main()
{
    /*
    Faça um programa em C++ que receba o número de horas trabalhadas e o valor do salário
    mínimo. Calcule e mostre o salário a receber seguindo as regras abaixo:
    a. A hora trabalhada vale a metade do salário mínimo;
    b. O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada
    c. O imposto equivale a 3% do salário bruto;
    d. O salário a receber equivale ao salário bruto menos o imposto.
    */
    setlocale(LC_ALL, "Portuguese");
    float salario, aux, res, impo;
    int hora;
    cout << "Digite o número de horas trabalhadas: " << endl;
    cin >> hora;
    cout << "Digite valor do salário mínimo: " << endl;
    cin >> salario;

    aux = hora * (salario / 2);

    impo = aux * 0.03;

    res = aux - impo;
    cout << "O salário ao receber vai ser: " << res;
}
