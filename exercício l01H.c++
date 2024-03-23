#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main() {
system("cls");
setlocale(LC_ALL, "Portuguese");

//Variáveis para armazenar os dados fornecidos pelo usuário   
 double comprimento, largura, altura;

//Inserir comprimento, largura e altura de um retangulo
 cout<<"Digite comprimento da caixa de um retangulo: ";
 cin >>comprimento;

 cout <<"Ditige largura da caixa de um retangulo: ";
 cin >> largura;

 cout <<"Digite a altura da caixa de um retangulo: ";
 cin >> altura;

// Cálculo do volume de uma caixa retengular
 double volume = comprimento * largura * altura;

  cout <<"O resultado do volume de um retangulo e: " << volume <<endl;

system("pause");
return 0;
}
