#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int x,y;
    int matrix[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(y - 2) + abs(x - 2) <<endl;
    return 0;
}
