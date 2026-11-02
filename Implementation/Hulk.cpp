//
// Created by FabioFernandez on 11/1/2026.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> feelings = {"I hate", "I love"} ;
    vector<string> subjects = {"that", "it"} ;
    int n, status = 0;
    cin >> n;
    if (n <= 1) {
        cout << feelings[0] << " " << subjects[1]<< endl;
        return 0;
    }
    while(n--) {
        cout << feelings[status] << " ";
        n != 0 ? cout << subjects[0] << " " : cout << subjects[1] << endl;
        status == 0 ? status = 1 : status = 0;
    }
    return 0;
}
