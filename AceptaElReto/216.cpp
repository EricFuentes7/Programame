#include <iostream>

using namespace std;
void gotesAHores(){
    int gotes; //segons
    cin >> gotes;
    int hores = gotes/3600;
        gotes = gotes%3600;

    int minuts = gotes/60;
    gotes %= 60;

    string hors;
    string mins;
    string gots;

    if (hores < 10){
        hors = "0" + to_string(hores);
    } else hors = to_string(hores);
    if (minuts < 10){
        mins = "0" + to_string(minuts);
    }else mins = to_string(minuts);
    if (gotes < 10){
        gots = "0" + to_string(gotes);
    }else gots = to_string(gotes);
    cout << hors << ":" << mins << ":" << gots << "\n";
}
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
    int entrades;
    cin >> entrades;

    while (entrades != 0){
        gotesAHores();
        entrades--;
    }
    return 0;
}