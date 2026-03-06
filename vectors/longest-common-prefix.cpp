#include <iostream>
#include <string>
#include <vector>
using namespace std;
void solve(vector<string> &str)
{
    string aux = "";
    for (string word : str)
    {
        if (aux.empty())
        {
            aux = word;
            continue;
        }
        for (int i = 0; i < word.size(); i++)
        {

            if (aux[i] != word[i])
            {

                aux = aux.substr(0, i);
                break;
            }
        }
    }
    cout << aux;
}
int main()
{
    vector<string> str = {
        "flower",
        "flow",
        "flight",
    };
    solve(str);
}