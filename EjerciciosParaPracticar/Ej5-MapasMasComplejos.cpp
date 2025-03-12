/* Enunciado del ejercicio:
  Crea un map<string, float> que almacene el nombre de productos como clave y su precio como valor.
  Inserta al menos 5 productos en el map, usando tanto el operador [], como insert() y emplace().
  Imprime todos los productos y sus precios recorriendo el map con un bucle for.
  Implementa una función que reciba un nombre de producto y verifique si está en el map. Si el producto está, devuelve su precio; si no, devuelve un mensaje que diga "Producto no encontrado".
  Elimina un producto del map usando el método erase(). Luego, intenta buscarlo para verificar si fue eliminado correctamente.
  Calcula el precio total de todos los productos en el map.
  Implementa una función que permita aumentar el precio de un producto en un porcentaje dado (por ejemplo, un aumento del 10%).
  Usa el método count() para verificar si un producto con un precio determinado está en el map.
  Ordena el map en orden descendente de precios (esto requiere recorrerlo en orden inverso).
  Imprime los productos ordenados de acuerdo con su nombre en orden alfabético.
*/

#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

map<string, float> producto;
vector<pair<string, float>> productoParaOrdenar;

string aElegir;
int sumar;
float porciento;
float valorSumado;
float precioProducto;
bool encontradoAlgo;

bool comparar(pair<string, float> a, pair<string, float> b) {
  return a.second < b.second;
}

void mapAVectorYOrdenar() {
  productoParaOrdenar.clear();
  for (const auto& num4 : producto) {
    productoParaOrdenar.push_back(num4);
  }
  sort(productoParaOrdenar.begin(), productoParaOrdenar.end(), comparar);
  cout << "Lista de productos ordenados por precio (menor a mayor): " << endl;
  for (int i = 0; i < productoParaOrdenar.size(); i++) {
    cout << productoParaOrdenar[i].first << " - " << productoParaOrdenar[i].second << endl;
  }
}

void nombreDePrecio() {
  encontradoAlgo = false;
  for (const auto& num3 : producto) {
    if (num3.second == precioProducto){
      cout << "El producto " << num3.first << " tiene el precio " << num3.second << endl;
      encontradoAlgo = true;
    }
  }
  if (encontradoAlgo == false) {
    cout << "No se han encontrado productos con ese precio." << endl;
  }
}
void porcentaje(string valorEntrado) {
  cout << "Ingresa el valor del %: ";
  cin >> porciento;
  cout << endl;

  if (producto.find(valorEntrado) != producto.end()) {
    producto[valorEntrado] = producto[valorEntrado] * (1 + (porciento / 100));
    cout << "Nuevo precio: " << producto[aElegir] << endl;
  } else {
    cout << "Producto no encontrado." << endl;
  }

}

void calcular(string aElegirDentro){
  if (producto.find(aElegirDentro) != producto.end()) {
    cout << producto[aElegirDentro] << endl;
  } else {
    cout << "Articulo no encontrado" << endl;
  }
}

float suma() {
  valorSumado = 0;
  for (const auto& num2 : producto){
    valorSumado = valorSumado + num2.second;
  }
  return valorSumado;
}
int main(){

  producto["Leche"] = 1.99;
  producto["Pan"] = 0.99;
  producto.insert({"Donuts", 2.99});
  producto.emplace("Arroz", 2.59);
  producto.emplace("Oreos", 2.99);

  for (const auto& num : producto){
    cout << num.first << " - " << num.second << endl;
  }
  cout << "Elige el producto: " << endl;
  cin >> aElegir;
  cout << endl << "Comprobacion de que esta: " << endl;
  calcular(aElegir);

  producto.erase(aElegir);

  cout << endl << "Comprobacion de si se ha eliminado: " << endl;
  calcular(aElegir);

  cout << endl <<"Suma de todos los precios - eliminado: " << endl;
  float sumaFinal = suma();
  cout << sumaFinal << endl;

  cout << endl << "Elige el nuevo producto al que le quieres aumentar el precio: ";
  cin >> aElegir;
  cout << endl;

  porcentaje(aElegir);

  cout << "Elige el precio del producto que quieres buscar: ";
  cin >> precioProducto;
  cout << endl;

  nombreDePrecio();
  mapAVectorYOrdenar();

  return 0;
}