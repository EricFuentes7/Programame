/*
Ejercicio 2: Uso de vectores

    Crea un vector vacío y usa push_back() para llenarlo con los números del 1 al 5.
    Elimina el último elemento usando pop_back() y vuelve a imprimirlo.
    Usa resize(10) para agrandarlo y rellena los nuevos espacios con el número 99.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> valores;
  for (int i = 0; i < 5; i++) {
    valores.push_back(i);
    cout << valores[i] << ", ";
  }
  cout << endl;
  valores.pop_back();
  for (int i = 0; i < valores.size(); i++) {
    cout << valores[i] << ", ";
  }
  cout << endl;
  valores.resize(10, 99);
  for (int i = 0; i < valores.size(); i++) {
    cout << valores[i] << ", ";
  }

  return 0;
}