/*
 Ejercicio 3: Uso de Pair y Tuple

    Crea un pair<string, double> que almacene el nombre de un producto y su precio.
    Crea un tuple<int, int, int> que guarde el día, mes y año de una fecha.
*/

#include <iostream>
#include <utility>
#include <tuple>

using namespace std;
int main (){
  pair<string, double> producto = {"Leche", 1.99};
  tuple<int, int, int> fecha = {10, 11, 2007};

  cout << producto.first << " - " << producto.second << endl;
  cout << get<0>(fecha) << " / " << get<1>(fecha) << " / " << get<2>(fecha) << endl;
  return 0;
}