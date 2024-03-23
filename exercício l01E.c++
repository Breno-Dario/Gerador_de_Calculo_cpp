#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main() {
system("cls");
setlocale(LC_ALL, "Portuguese");

// variáveis para armazenar os dados fornecidos pelo usuário
double valor, taxa, tempo;

// insirar os valores tipo valor, taxa e tempo
cout << "Digite um valor: ";
cin >> valor;

cout << "Digite uma taxa: ";
cin >> taxa;

cout << "Digite um tempo: ";
cin >> tempo;

// Cálculo da prestação 
double prestacao = valor + (valor * taxa /100)*tempo;

// Resultado da prestação 
cout<< "O resultada da prestacao sera de: R$" << prestacao <<endl;

system("pause");
return 0;
}