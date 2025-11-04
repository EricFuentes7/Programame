// https://aceptaelreto.com/problem/statement.php?id=164
#include <iostream>
using namespace std;
 
int main(){

    int entrades;
    cin >> entrades;

    for (int i = 0; i<entrades;i++){
       int pagina;
       cin >> pagina;
       
       cout << ((pagina%2==0) ? ++pagina : --pagina) << endl;
    }
    return 0;
}