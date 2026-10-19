//
// Created by FabioFernandez on 10/18/2026.
//

#include <iostream>
using namespace std;

int main() {
    int n, counter=0;
    string pole, aux=" ";
    cin >> n;
    while (n--) {
        cin >> pole;
        if (aux[1] == pole[0]) {
            counter++;
        }
        aux = pole;
    }
    cout << counter + 1 << endl;
    return 0;
}
