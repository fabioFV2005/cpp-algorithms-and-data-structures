//
// Created by Fabio on 19/09/2026.
//
#include <iostream>
using namespace std;

bool is_distinct(int y) {
    bool used[10] = {};

    while (y > 0) {
        int digit = y % 10;

        if (used[digit]) {
            return false;
        }

        used[digit] = true;
        y /= 10;
    }

    return true;
}

int main() {
    int y;
    cin >> y;

    do {
        y++;
    } while (!is_distinct(y));

    cout << y << endl;
}