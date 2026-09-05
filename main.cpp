#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int n;
    string word;
    cin >> n;
    while (n--) {
        cin >> word;
        if (word.length() <= 10) {
            cout << word << endl;
            continue;
        }
        cout << word[0] <<word.length() -2<<word[word.length()-1] <<endl;
    }

    return 0;
}
