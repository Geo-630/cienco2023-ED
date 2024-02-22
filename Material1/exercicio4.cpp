#include <iostream>
#include <locale>

using namespace std;

int main()
{
    /*
    Construa um programa em C++ que calcule o novo sal�rio de um funcion�rio. Considere
    que o funcion�rio dever� receber um reajuste de 15% caso seu sal�rio seja menor que
    1000. Se o sal�rio for maior ou igual a 1000, mas menor ou igual a 1500, o reajuste deve ser
    de 10%. Caso o sal�rio seja maior que 1500, o reajuste deve ser de 5%.
    */
    setlocale(LC_ALL, "Portuguese");
    float sal;
    cout << "Digite o valor do sal�rio: " << endl;
    cin >> sal;

    if(sal < 1000)
    {
        cout << "Sal�rio reajustado: " << sal + (sal*0.15);
    }else if(sal >= 1000 && sal <= 1500)
    {
        cout << "Sal�rio reajustado: " << sal + (sal*0.1);
    }else{
        cout << "Sal�rio reajustado: " << sal + (sal*0.05);
    }
}
