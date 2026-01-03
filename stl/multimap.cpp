#include <bits/stdc++.h>
using namespace std;

// Utility function to print a multimap
void print(const multimap<string, int> &mm)
{
    for (auto &p : mm)
        cout << p.first << ": " << p.second << endl;
    cout << endl;
}

int main()
{
    multimap<string, int> mm;
    mm.insert({"apple", 5});
    mm.insert({"banana", 2});
    mm.insert({"apple", 7});
    mm.insert({"grape", 3});
    cout << "Multimap contents:\n";
    print(mm);

    // Count
    cout << "Count of 'apple': " << mm.count("apple") << endl;

    // Find (first occurrence)
    auto it = mm.find("apple");
    if (it != mm.end())
        cout << "First 'apple' value: " << it->second << endl;

    // Erase all 'apple'
    mm.erase("apple");
    cout << "After erasing 'apple':\n";
    print(mm);

    // Size
    cout << "Size: " << mm.size() << endl;

    // Clear
    mm.clear();
    cout << "After clear, size: " << mm.size() << endl;

    return 0;
}
