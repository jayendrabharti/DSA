#include <bits/stdc++.h>
using namespace std;

// Utility function to print a multiset
void print(const multiset<int> &ms)
{
    for (auto x : ms)
        cout << x << " ";
    cout << endl;
}

int main()
{
    multiset<int> ms = {3, 1, 2, 2, 3};
    ms.insert(5);
    ms.insert(2);
    cout << "Multiset: ";
    print(ms);

    // Erase one occurrence of 2
    ms.erase(ms.find(2));
    cout << "After erasing one 2: ";
    print(ms);

    // Count
    cout << "Count of 2: " << ms.count(2) << endl;

    // Find
    auto it = ms.find(3);
    if (it != ms.end())
        cout << "Found 3 in multiset." << endl;

    // Size
    cout << "Size: " << ms.size() << endl;

    // Clear
    ms.clear();
    cout << "After clear, size: " << ms.size() << endl;

    return 0;
}
