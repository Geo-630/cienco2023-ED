#include <iostream>
#include <locale>

using namespace std;

#define TAM 365

int main()
{
    /*
    Faça um programa em C++ para ler e armazenar em um vetor a temperatura
    média de todos os dias do ano. Calcular e escrever:
    a) Menor temperatura do ano
    b) Maior temperatura do ano
    c) Temperatura média anual
    d) O número de dias no ano em que a temperatura foi inferior a média anual
    */
    setlocale(LC_ALL, "Portuguese");
    float vetor[TAM];
    for(int i = 0; i < TAM; i++)
    {
        cout << "Digite a temperatura média do " << i + 1 <<"º dia do ano: ";
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
    cout << "A menor temperatura do ano foi de: " << men << "ºC \n";
    cout << "A maior temperatura do ano foi de: " << max << "ºC \n";
    cout << "A temperatura média anual foi de: " << media << "ºC \n";
    cout << "A quantidade de dias que a temperatura média foi menor do que a temperatura anual foi de: " << dia << " dias \n";

}
