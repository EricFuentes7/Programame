#include <iostream>
using namespace std;

void calcularMonedes(){
    int passatgeDins; //1 chelin
    int passatgeFora; // 9 peniques
    int passatgeDinsComode; // 1 chelin 6 peniques
    int passatgeForaComode; // 1 chelin

    cin >> passatgeDins >> passatgeFora >> passatgeDinsComode >> passatgeForaComode;
    //1 chelin son 12 peniques
    //1 libra 20 chelines

    int chelins = passatgeDins + passatgeForaComode + passatgeDinsComode;
    int peniques = passatgeDinsComode*6 + passatgeFora*9;
    int libras = 0;
    //cout << chelins << " " << peniques << "\n";
    //cout << passatgeDins << " " << passatgeFora << "\n";
    chelins += peniques/12;
    peniques = peniques%12;
    libras = chelins/20;
    chelins = chelins%20;
    
    
    cout << libras << " " << chelins << " " << peniques << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int entrada;
    cin >> entrada;
    while (entrada != 0){
        if(entrada == 0){
            return 0;
        }
        calcularMonedes();
        entrada--;
    }
    return 0;
}