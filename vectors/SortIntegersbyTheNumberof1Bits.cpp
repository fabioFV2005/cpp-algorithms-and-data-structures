#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// bool isPowerOfTwo(int n)
// {
//     if (n <= 0)
//         return true;
//     while (n / 2 != 0)
//     {
//         if (n % 2 != 0)
//             return false;

//         n = n / 2;
//     }
//     return true;
// }

int countBits(int n)
{
    int count = 0;

    while (n > 0)
    {
        // mira el último bit
        count += (n & 1);
        // desplaza a la derecha
        n >>= 1;
    }

    return count;
}
int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    sort(arr.begin(), arr.end(), [](int a, int b)
         {  
            
             int pa = countBits(a);
             int pb = countBits(b);

             if (pa != pb)
                 return pa < pb; 

             return a < b; });
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
