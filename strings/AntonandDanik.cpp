//
// Created by Fabio on 14/09/2026.
//
#include <iostream>
#include <string>
using namespace std;


int main() {
    int n, A, D;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i]== 'A') {
            A++;
        }else if (s[i]== 'D') {
            D++;
        }
    }
    if (A>D) {
        cout << "Anton" << endl;
    }else if (A<D){
        cout << "Danik" << endl;
    }else {
        cout << "Friendship" << endl;
    }
    return 0;
}