#include <bits/stdc++.h>
using namespace std;

// Utility function to print an unordered_set
void print(const unordered_set<int> &us)
{
    for (auto x : us)
        cout << x << " ";
    cout << endl;
}

int main()
{
    unordered_set<int> us = {3, 1, 2};
    us.insert(5);
    us.insert(4);
    us.insert(6);
    cout << "Unordered set: ";
    print(us);

    // Erase
    us.erase(3);
    cout << "After erasing 3: ";
    print(us);

    // Count
    cout << "Count of 3: " << us.count(3) << endl;
    cout << "Count of 4: " << us.count(4) << endl;

    // Find
    auto it = us.find(4);
    if (it != us.end())
        cout << "Found 4 in unordered_set." << endl;

    // Size
    cout << "Size: " << us.size() << endl;

    // Clear
    us.clear();
    cout << "After clear, size: " << us.size() << endl;

    return 0;
}
