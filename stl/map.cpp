#include <bits/stdc++.h>
using namespace std;

// Utility function to print a map
void print(const map<string, int> &m)
{
    cout << "Map contents:\n";
    for (const auto &p : m)
        cout << p.first << ": " << p.second << endl;
    cout << endl;
}

int main()
{
    // Initialization
    map<string, int> m;
    m["apple"] = 5;
    m["banana"] = 2;
    m["orange"] = 7;
    m.insert({"grape", 3});

    print(m);

    // Access
    cout << "Value for 'apple': " << m["apple"] << endl;
    cout << "Value for 'pear' (default-inserted): " << m["pear"] << endl;

    // Iteration
    cout << "Iterating with iterator:\n";
    for (auto it = m.begin(); it != m.end(); ++it)
        cout << it->first << " => " << it->second << endl;

    // Find
    auto it = m.find("banana");
    if (it != m.end())
        cout << "Found banana, value: " << it->second << endl;

    // Erase by key
    m.erase("banana");
    print(m);

    // Size
    cout << "Size: " << m.size() << endl;

    // Count (existence)
    cout << "Count of 'apple': " << m.count("apple") << endl;
    cout << "Count of 'banana': " << m.count("banana") << endl;

    // Clear
    m.clear();
    cout << "After clear, size: " << m.size() << endl;

    return 0;
}
