#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Merge Strings Alternately -> Leetcode

int main()
{

    string word1 = "abcd", word2 = "pq", new_word;
    int length1 = word1.length(), length2 = word2.length();
    for (int i = 0; i < max(length1, length2); i++)
    {
        if (i < length1)
            new_word += word1[i];
        if (i < length2)
            new_word += word2[i];
    }

    cout << new_word;

    return 0;
};