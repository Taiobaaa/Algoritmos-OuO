#include <iostream>
#include <cmath>

using namespace std;

double calcularVolumeEsfera(double raio) {
    const double pi = 3.141592653589793;
    double volume = (4.0 / 3.0) * pi * pow(raio, 3);
    return volume;
}

int main() {
    double raio;
    cout << "Digite o raio da esfera: ";
    cin >> raio;

    double volume = calcularVolumeEsfera(raio);

    cout << "O volume da esfera com raio " << raio << " eh: " << volume << endl;

    return 0;
}
