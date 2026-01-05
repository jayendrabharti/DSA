#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int smallest;
    int second_smallest;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            smallest = arr[i];
            second_smallest = INT_MAX;
        }
        else
        {
            if (arr[i] < smallest)
            {
                second_smallest = smallest;
                smallest = arr[i];
            }
            else if (arr[i] < second_smallest && arr[i] != smallest)
            {
                second_smallest = arr[i];
            }
        }
    }

    if (second_smallest == INT_MAX)
    {
        cout << "No second smallest element" << endl;
    }
    else
    {
        cout << "The second smallest element is: " << second_smallest << endl;
    }

    return 0;
}
