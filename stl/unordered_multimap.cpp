#include <bits/stdc++.h>
using namespace std;

// Utility function to print an unordered_multimap
void print(const unordered_multimap<string, int> &umm) {
    for (auto &p : umm) cout << p.first << ": " << p.second << endl;
    cout << endl;
}

int main() {
    unordered_multimap<string, int> umm;
    umm.insert({"apple", 5});
    umm.insert({"banana", 2});
    umm.insert({"apple", 7});
    umm.insert({"grape", 3});
    cout << "Unordered multimap contents:\n";
    print(umm);

    // Count
    cout << "Count of 'apple': " << umm.count("apple") << endl;

    // Find (first occurrence)
    auto it = umm.find("apple");
    if (it != umm.end())
        cout << "First 'apple' value: " << it->second << endl;

    // Erase all 'apple'
    umm.erase("apple");
    cout << "After erasing 'apple':\n";
    print(umm);

    // Size
    cout << "Size: " << umm.size() << endl;

    // Clear
    umm.clear();
    cout << "After clear, size: " << umm.size() << endl;

    return 0;
}
