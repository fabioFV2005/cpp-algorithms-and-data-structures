#include <vector>
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
        for (char &s : str)
        {
            if (control == true && s != ' ')
            {
                s = toupper(s);
                control = false;
            }
            else if (!control && s != ' ')
            {
                s = tolower(s);
                control = true;
            }
        }
        cout << str << endl;
    }
    return 0;
}