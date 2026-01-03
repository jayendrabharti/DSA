#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3};
    cout << "Original: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // next_permutation
    if (next_permutation(v.begin(), v.end()))
    {
        cout << "Next permutation: ";
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    else
    {
        cout << "No next permutation (already largest)" << endl;
    }

    // Print all permutations
    cout << "All permutations:\n";
    sort(v.begin(), v.end());
    do
    {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}
