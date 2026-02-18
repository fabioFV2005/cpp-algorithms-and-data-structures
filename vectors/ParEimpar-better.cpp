#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int attempts;
    cin >> attempts;

    vector<int> numbers(attempts);
    for (int i = 0; i < attempts; i++)
        cin >> numbers[i];

    sort(numbers.begin(), numbers.end(), [](int a, int b)
         {
        bool evenA = (a % 2 == 0);
        bool evenB = (b % 2 == 0);

        // pares primero
        if (evenA != evenB)
            return evenA;

        // ambos pares ascendente
        if (evenA)
            return a < b;

        // ambos impares descendente
        return a > b; });

    for (int x : numbers)
        cout << x << "\n";
}
