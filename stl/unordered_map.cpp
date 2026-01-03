#include <bits/stdc++.h>
using namespace std;

// Utility function to print an unordered_map
void print(const unordered_map<string, int> &um)
{
    cout << "Unordered Map contents:\n";
    for (const auto &p : um)
        cout << p.first << ": " << p.second << endl;
    cout << endl;
}

int main()
{
    // Initialization
    unordered_map<string, int> um;
    um["apple"] = 5;
    um["banana"] = 2;
    um["orange"] = 7;
    um.insert({"grape", 3});

    print(um);

    // Access
    cout << "Value for 'apple': " << um["apple"] << endl;
    cout << "Value for 'pear' (default-inserted): " << um["pear"] << endl;

    // Iteration
    cout << "Iterating with iterator:\n";
    for (auto it = um.begin(); it != um.end(); ++it)
        cout << it->first << " => " << it->second << endl;

    // Find
    auto it = um.find("banana");
    if (it != um.end())
        cout << "Found banana, value: " << it->second << endl;

    // Erase by key
    um.erase("banana");
    print(um);

    // Size
    cout << "Size: " << um.size() << endl;

    // Count (existence)
    cout << "Count of 'apple': " << um.count("apple") << endl;
    cout << "Count of 'banana': " << um.count("banana") << endl;

    // Clear
    um.clear();
    cout << "After clear, size: " << um.size() << endl;

    return 0;
}
