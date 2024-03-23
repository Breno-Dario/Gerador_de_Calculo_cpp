#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main () {
system("cls");
setlocale(LC_ALL, "Portuguese");

 // Variáveis para armazenar os dados fornecidos pelo usuário
 float c;

//Imprimir o texto "Graus em Celsius" 
 cout << "Graus em Celsius: ";
 cin >> c;

//Faz conversão de Celsius para Fahrenheit
 float f = (9 * c + 160)/5;

//Imprimir o resultado do cálculo
cout << "Representa em Fahrenheit: " << f << endl;

//Pergunta se deseja continuar 
system("pause");
return 0;

}

