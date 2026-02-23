//  Container With Most Water - leetcode
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool solve()
{
}
int main()
{
    int n, original_index = 0, max_area = 0, current_area;
    int array[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(array) / sizeof(array[0]);
    while (original_index < size)
    {
        for (int j = 1; j < size; j++)
        {

            current_area = array[original_index] * j;
            cout << array[original_index] << " X " << array[j] << " = " << current_area << endl;
        }
        if (current_area > max_area)
        {
            max_area = current_area;
        }
        original_index++;
    }
    cout << max_area << endl;
    return 0;
}
