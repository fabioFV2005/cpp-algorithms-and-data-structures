
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> horseShoes(4);
    int changes = 0;
    bool control = false;
    for (int i = 0; i < 4; i++) {
        cin >> horseShoes[i];
    }
    for (int i = 0; i < 4; i++) {
        control = false;
        for (int j = 0; j < i; j++) {
            if (horseShoes[i] == horseShoes[j] && control == false) {
                changes++;
                control = true;
            }
        }
    }
    cout << changes << endl;
    return 0;
}
