#include <iostream>

using namespace std;

void gerarTriangulo(int altura) {
    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < altura - i - 1; ++j) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int altura;

    cout << "Digite a altura do triângulo: ";
    cin >> altura;

    gerarTriangulo(altura);

    return 0;
}
