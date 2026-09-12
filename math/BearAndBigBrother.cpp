//
// Created by Fabio on 12/09/2026.
//
#include <iostream>
#include <cctype>
using namespace std;


int main() {

    int limak, bob, count = 0;
    cin >> limak >> bob;
    while (limak <= bob) {
        limak *= 3;
        bob *= 2;
        count++;
    }
    cout << count;
    return 0;
}
