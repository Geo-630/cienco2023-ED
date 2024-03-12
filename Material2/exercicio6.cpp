#include <iostream>
#include <locale>

using namespace std;

#define TAM 365

int main()
{
    /*
    Fa�a um programa em C++ para ler e armazenar em um vetor a temperatura
    m�dia de todos os dias do ano. Calcular e escrever:
    a) Menor temperatura do ano
    b) Maior temperatura do ano
    c) Temperatura m�dia anual
    d) O n�mero de dias no ano em que a temperatura foi inferior a m�dia anual
    */
    setlocale(LC_ALL, "Portuguese");
    float vetor[TAM];
    for(int i = 0; i < TAM; i++)
    {
        cout << "Digite a temperatura m�dia do " << i + 1 <<"� dia do ano: ";
        cin >> vetor[i];
    }
    //a)
    float men;
    men = vetor[0];
    for(int i = 1; i < TAM; i++){
        if(men > vetor[i]){
            men = vetor[i];
        }
    }
    //b)
    float max;
    max = vetor[0];
    for(int i = 1; i < TAM; i++)
    {
        if(max < vetor[i])
        {
            max = vetor[i];
        }
    }
    //c)
    int soma = 0;

    for(int i = 0; i < TAM; i++)
    {
        soma += vetor[i];
    }
    float media = soma / TAM;
    //d)
    int dia = 0;
    for(int i = 0; i < TAM; i++)
    {
        if(vetor[i] < media)
        {
            dia++;
        }
    }


    // Saida de dados
    cout << "A menor temperatura do ano foi de: " << men << "�C \n";
    cout << "A maior temperatura do ano foi de: " << max << "�C \n";
    cout << "A temperatura m�dia anual foi de: " << media << "�C \n";
    cout << "A quantidade de dias que a temperatura m�dia foi menor do que a temperatura anual foi de: " << dia << " dias \n";

}
