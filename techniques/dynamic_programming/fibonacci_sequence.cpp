#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int fib[size];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < size; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    cout << fib[size - 1];
    return 0;
}
