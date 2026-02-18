#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int attempts;
    cin >> attempts;
    cin.ignore(1);
    while (attempts--)
    {
        vector<string> words;
        string str;
        string actual_word = "";
        getline(cin, str);
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
        string aux;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words.size() - 1; j++)
            {
                if (words[j].length() == words[j + 1].length())
                    continue;

                if (words[j].length() < words[j + 1].length())
                {
                    aux = words[j + 1];
                    words[j + 1] = words[j];
                    words[j] = aux;
                }
            }
        }
        for (int i = 0; i < words.size(); i++)

        {
            cout << words[i] << " ";
        }
        cout << endl;
        words.clear();
    }
}
