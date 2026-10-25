//
// Created by FabioFernandez on 10/18/2026.
//

#include <iostream>
using namespace std;

int main() {
    bool control;
    int n, query;
    cin >> n;
    while (n--) {
        cin >> query;
        if (query == 1) {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}
