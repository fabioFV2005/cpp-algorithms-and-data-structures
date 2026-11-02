//
// Created by FabioFernandez on 10/25/2026.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int a, b, n;
    cin >>n;
    while(n--) {
        cin >> a >> b;
        if (a % b == 0) {
            cout << 0<< endl;
            continue;
        }
        cout <<b - a%b << endl;
    }
    return 0;
}
