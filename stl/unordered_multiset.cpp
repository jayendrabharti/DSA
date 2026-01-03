#include <bits/stdc++.h>
using namespace std;

// Utility function to print an unordered_multiset
void print(const unordered_multiset<int> &ums)
{
    for (auto x : ums)
        cout << x << " ";
    cout << endl;
}

int main()
{
    unordered_multiset<int> ums = {3, 1, 2, 2, 3};
    ums.insert(5);
    ums.insert(2);
    cout << "Unordered multiset: ";
    print(ums);

    // Erase one occurrence of 2
    auto it = ums.find(2);
    if (it != ums.end())
        ums.erase(it);
    cout << "After erasing one 2: ";
    print(ums);

    // Count
    cout << "Count of 2: " << ums.count(2) << endl;

    // Find
    it = ums.find(3);
    if (it != ums.end())
        cout << "Found 3 in unordered_multiset." << endl;

    // Size
    cout << "Size: " << ums.size() << endl;

    // Clear
    ums.clear();
    cout << "After clear, size: " << ums.size() << endl;

    return 0;
}
