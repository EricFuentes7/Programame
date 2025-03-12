/*
Ejercicio 4: Uso de Map

    Crea un map<string, int> para almacenar nombres de estudiantes y sus notas.
    Escribe un programa que le pregunte al usuario un nombre y devuelva su nota.
    Borra un estudiante del map y vuelve a imprimir los valores
*/

#include <iostream>
#include <map>

using namespace std;

int main(){
  map<string, int> agenda;
  agenda["Eric"] = 784957348;
  agenda["Casiando"] = 696969696;

  cout << "El teléfono de Eric és " << agenda["Eric"] << endl << "---" << endl;

  for (const auto& num : agenda){
    cout << "El teléfono de " << num.first << " és " << num.second << endl;
  }

  if (agenda.find("Eric") != agenda.end()) {
    cout << "Eric Encontrado" << endl;
  } else {
    cout << "Eric No encontrado" << endl;
  }

  if (agenda.find("Lolito") != agenda.end()) {
    cout << "Lolito Encontrado" << endl;
  } else {
    cout << "Lolito No encontrado" << endl;
  }

  agenda.erase("Eric");
  agenda.insert({"Lolito", 333333333});

  if (agenda.find("Eric") != agenda.end()) {
    cout << "Eric Encontrado" << endl;
  } else {
    cout << "Eric No encontrado" << endl;
  }
  if (agenda.find("Lolito") != agenda.end()) {
    cout << "Lolito Encontrado" << endl;
  } else {
    cout << "Lolito No encontrado" << endl;
  }
  return 0;
}