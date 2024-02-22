#include <iostream>

using namespace std;

int main()
{
    /*
    Escreva um programa em C++ que escreva todos os números múltiplos de 5, no intervalo de 1 a 500.
    */
    for(int i = 1; i <= 500; i++)
    {
        if(i % 5 == 0)
        {
            cout << i << endl;
        }
    }
}
