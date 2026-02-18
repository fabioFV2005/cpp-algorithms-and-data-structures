#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int attempts;
    cin >> attempts;
    cin.ignore();

    while (attempts--)
    {
        vector<string> words;
        string str, word;

        getline(cin, str);

        string actual_word = "";
        for (char c : str)
        {
            if (c == ' ')
            {
                if (!actual_word.empty())
                {
                    words.push_back(actual_word);
                    actual_word.clear();
                }
            }
            else
            {
                actual_word += c;
            }
        }

        if (!actual_word.empty())
            words.push_back(actual_word);

        stable_sort(words.begin(), words.end(), [](string a, string b)
                    { return a.length() > b.length(); });

        for (int i = 0; i < words.size(); i++)
        {
            cout << words[i];
            if (i != words.size() - 1)
                cout << " ";
        }
        cout << endl;
    }
}
