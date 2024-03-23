#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int main() {
system("cls");
setlocale(LC_ALL, "Portuguese");

// variáveis para armazenar os dados fornecidos pelo usuário
double tempo, velocidade;

//inserar o tempo e a velocidade
cout << "Digite o tempo gasto ( em horas): ";
cin >> tempo;

cout << "Digite a velocidade (em Km/h): ";
cin >> velocidade;

// cáculo da distancia e listros usados 
double distancia = tempo * velocidade;
double litros_usados = distancia / 12.0;

// resultados da velocidade média, tempo, distância e listros usados
cout << "Velocidade media: " << velocidade << "Km/h\n";
cout << "Tempo gasto de viagem: " << tempo << "horas/h\n";
cout << "Distancia pecorrido: " << distancia << "km/h\n";
cout << "Quantidade de litros usado: " << litros_usados << "litros\n";

system("pause");
return 0;

}
