#include <bits/stdc++.h>
using namespace std;

// Utility function to print a set
void print(const set<int> &s)
{
    cout << "Set: ";
    for (const auto &elem : s)
        cout << elem << " ";
    cout << endl;
}

int main()
{
    // Initialization
    set<int> s = {3, 1, 2};
    s.insert(5);
    s.insert(4);
    s.insert(6);

    cout << "Initial set (sorted, unique):\n";
    print(s);

    // Size
    cout << "Size of set: " << s.size() << endl;

    // Erase by value
    s.erase(3);
    cout << "After erasing 3:\n";
    print(s);

    // Count (check existence)
    cout << "Count of 3: " << s.count(3) << endl;
    cout << "Count of 4: " << s.count(4) << endl;

    // Find
    auto it = s.find(4);
    if (it != s.end())
        cout << "Found 4 at iterator position." << endl;

    // Lower and upper bound
    cout << "Lower bound of 4: ";
    it = s.lower_bound(4);
    if (it != s.end())
        cout << *it << endl;
    else
        cout << "not found" << endl;

    cout << "Upper bound of 4: ";
    it = s.upper_bound(4);
    if (it != s.end())
        cout << *it << endl;
    else
        cout << "not found" << endl;

    // Iterating in reverse
    cout << "Reverse iteration: ";
    for (auto rit = s.rbegin(); rit != s.rend(); ++rit)
        cout << *rit << " ";
    cout << endl;

    // Clear
    s.clear();
    cout << "After clear, set size: " << s.size() << endl;

    return 0;
}