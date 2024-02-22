#include <iostream>
#include <locale>

using namespace std;

int main()
{
    /*
    Construa um programa em C++ que calcule o novo salário de um funcionário. Considere
    que o funcionário deverá receber um reajuste de 15% caso seu salário seja menor que
    1000. Se o salário for maior ou igual a 1000, mas menor ou igual a 1500, o reajuste deve ser
    de 10%. Caso o salário seja maior que 1500, o reajuste deve ser de 5%.
    */
    setlocale(LC_ALL, "Portuguese");
    float sal;
    cout << "Digite o valor do salário: " << endl;
    cin >> sal;

    if(sal < 1000)
    {
        cout << "Salário reajustado: " << sal + (sal*0.15);
    }else if(sal >= 1000 && sal <= 1500)
    {
        cout << "Salário reajustado: " << sal + (sal*0.1);
    }else{
        cout << "Salário reajustado: " << sal + (sal*0.05);
    }
}
