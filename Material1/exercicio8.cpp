#include <iostream>
#include <locale>

using namespace std;

int main()
{
    /*
    Em uma eleição presidencial existem dois candidatos. Os votos são informados através de
    códigos. Os dados utilizados para a contagem dos votos têm-se a seguinte codificação: 1,2=
    voto para os respectivos candidatos; 3= voto nulo; 4= voto em branco; Elabore um
    programa em C++ que leia o código do candidato em um voto. Como finalizador do
    conjunto de votos, tem-se o valor 0. Calcule e escreva: (1) percentual de votos para cada
    candidato; (2) percentual de votos nulos; (3) percentual de votos em branco;
    */
    setlocale(LC_ALL, "Portuguese");
    int voto;
    float um = 0, dois = 0, tres = 0, quat = 0, soma = 0;
    do{
        cout << "Qual seu voto? \n"
                "1 - Candidato 1 \n"
                "2 - Candidato 2 \n"
                "3 - Voto Nulo \n"
                "4 - Voto em Branco \n"
                "0 - Acabar o programa \n";
        cin >> voto;

        switch(voto){
        case 1:
            um = um + 1;
            break;
        case 2:
            dois = dois + 1;
            break;
        case 3:
            tres = tres + 1;
            break;
        case 4:
            quat = quat + 1;
        case 0:
            break;
        default:
            cout << "Voto não existente" << endl;
        }
    }while(voto != 0);

    soma = um + dois + tres + quat;

    cout << "Resultado: \n"
            "Candidato 1: " << (um * 100) / soma << "%\n"
            "Candidato 2: " << (dois * 100) / soma << "%\n"
            "Voto Nulo: " << (tres * 100) / soma << "%\n"
            "Voto em Branco: " << (quat * 100) / soma << "%\n";

}
