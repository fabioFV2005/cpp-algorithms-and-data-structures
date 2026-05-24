// Letter Combinations of a Phone Number -> Problem leetCode.
// Difficult: medium
// Topics: HashTable, Backtracking, String.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> result;

vector<string> cellphone = {
    "", "", "abc", "def",
    "ghi", "jkl", "mno",
    "pqrs", "tuv", "wxyz"};

void solve(int n, int next_index)
{

    // cout << cellphone[n].length() - 1 << endl;
    // for (int i = 0; i < cellphone[n].length(); i++)
    //     result.push_back(string(1, cellphone[n][i]));

    for (int i = 0; i < cellphone[n].length(); i++)
    {
        for (int j = 0; j < cellphone[next_index].length(); j++)
        {
            // cout << cellphone[n][i] << cellphone[next_index][j] << endl;
            result.push_back(string(1, cellphone[n][i]) + cellphone[next_index][j]);
        }
    }
};
int main()
{

    string numbers = "25";
    // cin >> numbers;
    for (int i = 0; i < numbers.length() - 1; i++)
        solve(numbers[i] - '0', numbers[i + 1] - '0');
    for (auto res : result)
        cout << res << " ";
    return 0;
};
