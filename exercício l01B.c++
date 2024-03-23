#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main () {
system("cls");
setlocale(LC_ALL, "Portuguese");

  // Variáveis para armazenar os dados fornecidos pelo usuário
  float  f; 
  
 //Imprimir o texto "Grau em Fahrenheit"
  cout<<"Grau em Fahrenheit: ";
  cin >> f;

// Faz conversão de Fahrenheit para Celsius 
  double c = (f - 32) * 5/9;

//Imprimir o resultado do cálculo
 cout <<"Representa em Celsius: " << c << endl;
 
//Pergunta se deseja continuar 
system("pause");  
return 0;
  
}