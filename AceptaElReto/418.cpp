#include <iostream>
#include <ostream>

#include <map>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

void Renumera(){

    map<unsigned int,unsigned int> valors;

    vector<unsigned int> primerValor;
    vector<string> segundoValor;
    vector<unsigned int> tercerValor;

    while (true){


        unsigned int numero;
        string caract;
        cin >> numero;

        if (numero == 0){
            break;
        }

        primerValor.push_back(numero);
        cin >> caract;
        segundoValor.push_back(caract);

        if (caract != "RETURN"){
            cin >> numero;
            tercerValor.push_back(numero);
        } else tercerValor.push_back(0);


        /*tuple<int, string, int> tupla = split(linea, ' ');*/
    }
    int aMul = 10;
    for (unsigned int &valorsPrin : primerValor){

        valors[valorsPrin] = aMul;
        aMul += 10;
    }

    for (unsigned int i = 0; i < primerValor.size(); i++){
        if (segundoValor[i] == "RETURN"){
            cout << valors[primerValor[i]] << " " << segundoValor[i] << "\n";
        } else {
            cout << valors[primerValor[i]] << " " << segundoValor[i] << " " << valors[tercerValor[i]] << "\n";
        }
    }
    cout << "---\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        Renumera();
    }

}



