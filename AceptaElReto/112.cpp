#include <iostream>
using namespace std;

int main() {
    int distancia, km, segundos;

    while (true) {
        cin >> distancia >> km >> segundos;

        if (distancia == 0 && km == 0 && segundos == 0) {
            break;
        }

        if (distancia < 0 || km < 0 || segundos < 0) {
            cout << "ERROR" << endl;
        }

        double velocidad = (distancia * 3.6) / (double)segundos;

        if (velocidad > (double)km * 1.2) {
            cout << "PUNTOS" << endl;
        }
        else if (velocidad > (double)km) {
            cout << "MULTA" << endl;
        }
        else {
            cout << "OK" << endl;
        }
    }
    return 0;
}
