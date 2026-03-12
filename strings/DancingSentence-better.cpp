#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        bool control = true;
        for (char &c : str)
        {
            if (c != ' ')
            {
                c = control ? toupper(c) : tolower(c);
                control = !control;
            }
        }
        cout << str << endl;
    }
}