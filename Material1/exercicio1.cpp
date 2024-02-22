#include <iostream>

using namespace std;

int main()
{
    float peso, alt;
    cout << "Digite seu peso: " << endl;
    cin >> peso;
    cout << "Digite sua altura: " << endl;
    cin >> alt;

    if(peso/(alt * alt) < 20)
    {
        cout << "Abaixo do peso";
    }else if (peso/(alt * alt) >= 20 && peso/(alt * alt) < 25)
    {
        cout << "Peso ideal";
    }else{
        cout << "Acima do peso";
    }
}
