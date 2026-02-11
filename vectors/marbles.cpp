// Problem: 1025
// platform: becrowd
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int binary_search_first(vector<int> &marbles, int query)
{
    int low = 0, high = marbles.size() - 1;
    int answer = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (marbles[mid] == query)
        {
            answer = mid;
            high = mid - 1;
        }
        else if (marbles[mid] < query)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    int caseNumber = 1;

    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;

        vector<int> marbles(n);

        for (int i = 0; i < n; i++)
        {
            cin >> marbles[i];
        }

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << caseNumber++ << ":\n";

        for (int i = 0; i < q; i++)
        {
            int query;
            cin >> query;
            int result = binary_search_first(marbles, query);
            if (result != -1)
            {
                cout << query << " found at " << result + 1 << "\n";
            }
            else
            {
                cout << query << " not found\n";
            }
        }
    }
    return 0;
}
