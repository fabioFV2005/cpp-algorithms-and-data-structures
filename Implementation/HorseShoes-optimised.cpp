//
// Created by FabioFernandez on 10/25/2026.
//
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> horseShoes;

    for (int i = 0; i < 4; i++) {
        int color;
        cin >> color;
        horseShoes.insert(color);
    }

    cout << 4 - horseShoes.size() << endl;
    return 0;
}