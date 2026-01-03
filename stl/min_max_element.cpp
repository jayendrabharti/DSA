#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 8, 1, 3};
    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // min_element
    auto min_it = min_element(v.begin(), v.end());
    if (min_it != v.end())
        cout << "Min element: " << *min_it << endl;

    // max_element
    auto max_it = max_element(v.begin(), v.end());
    if (max_it != v.end())
        cout << "Max element: " << *max_it << endl;

    return 0;
}
