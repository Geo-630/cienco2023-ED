#include <iostream>
#include <locale>

using namespace std;

#define TAM 10

int main()
{
 /*
  Escreva um programa em C++ que permita a leitura dos nomes de 10
  pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
  deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
  escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
  anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.
 */
  setlocale(LC_ALL, "Portuguese");
  string vetor[TAM], nome;
  bool bo = false;

  for(int i = 0; i < TAM; i++)
  {
      cout << "Digite um nome: ";
      cin >> vetor[i];
  }

  cout << "\n Digite o nome que quer encontrar: ";
  cin >> nome;

  for(int i = 0; i < TAM; i++)
  {
      if(nome == vetor[i]){
        bo = true;
      }
  }
    if(bo){
        cout << "\n ACHEI";
      }else{
        cout << "\n NÃO ACHEI";
      }
}
