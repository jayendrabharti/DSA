#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 8, 1, 3};
    cout << "Original vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // sort
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // Custom sort (descending)
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted descending: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}
