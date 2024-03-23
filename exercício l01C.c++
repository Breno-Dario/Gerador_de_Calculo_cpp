#include "iostream"
#include "cmath"
#include "cstdlib"
using namespace std;

int main() {
system("cls");
setlocale(LC_ALL, "Portuguese");

// Variáveis para armazenar os dados fornecidos pelo usuário
float  r, a;

//Inserir o raio da lata de óleo e altura"
cout<<"Digite o raio da lata de oleo: ";
cin >> r;

cout<<"Digite a altura da lata de oleo:";
cin >> a;

// Faz o cálculo do volume da lata de óleo
float v = M_PI * pow(r,2) * a;

// Imprimir o resultado do volume da lata de óleo 
cout << "O valor do volume da lata e:" << v << endl;

//Pergunta se deseja continuar 
system("pause");
return 0;
}