#include <iostream>
#include <vector>
using namespace std;

int main() {

    string s= "abc", t="ahbgdc", temp;
    int read_s = 0, read_t = 0;
    while (read_t < t.size()) {
        if (s[read_s] == t[read_t]) {
            temp += t[read_t];
            read_s++;
        }
        read_t++;
    }
    if (s==temp) return true;
    else return false;
    // cout << temp;
    return 0;
}
