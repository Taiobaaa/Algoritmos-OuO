#include <iostream>
using namespace std
int Maior(int numero1, int numero2) {
    if (numero1 > numero2) {
        return numero1;
    } else {
        return numero2;
    }
}

int main() {
    // Exemplo de uso da função
    int num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;
    int maiorNumero = encontrarMaior(num1, num2);
    cout << "O maior número é: " << maiorNumero << endl;

    return 0;
}
