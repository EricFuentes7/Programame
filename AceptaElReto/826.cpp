```cpp
#include <iostream>
using namespace std;


int calcularMaquinista(){
    int tonelades;
    int milles;
    int cost;
    int costRet;
    int resta1;
    int resta2;

    cin >> tonelades >> milles >> cost >> costRet >> resta1 >> resta2;

    int valorSumas = cost*milles*tonelades;
    int restes = (costRet*milles)*2 + resta1 + resta2;
    return valorSumas-restes;
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
        cout << calcularMaquinista() << "\n";
        entrada--;
    }
    return 0;
}
```