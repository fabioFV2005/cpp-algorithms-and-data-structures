//
// Created by FabioFernandez on 10/18/2026.
//
#include <iostream>
using namespace std;

int main() {
    int n, p, q, counter=0;
    cin >> n;
    while (n--) {
        cin >> p >> q;
        if (q - p >= 2) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
