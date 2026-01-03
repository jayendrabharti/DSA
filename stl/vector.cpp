#include <bits/stdc++.h>
using namespace std;

// Utility function to print a vector
void print(const vector<int> &vec)
{
    for (auto x : vec)
        cout << x << " ";
    cout << endl;
}

int main()
{
    // Initialization
    vector<int> vec = {3, 5, 1, 2, 6, 4};
    cout << "Initial vector: ";
    print(vec);

    // Sorting
    sort(vec.begin(), vec.end());
    cout << "Sorted vector: ";
    print(vec);

    // Insert at position
    vec.insert(vec.begin() + 2, 10);
    cout << "After inserting 10 at index 2: ";
    print(vec);

    // Insert near end
    vec.insert(vec.end() - 2, 20);
    cout << "After inserting 20 before last two elements: ";
    print(vec);

    // Reverse
    reverse(vec.begin(), vec.end());
    cout << "Reversed vector: ";
    print(vec);

    // Remove last element
    vec.pop_back();
    cout << "After pop_back: ";
    print(vec);

    // Erase by index
    vec.erase(vec.begin() + 1); // Remove second element
    cout << "After erasing index 1: ";
    print(vec);

    // Erase a range
    if (vec.size() > 3)
    {
        vec.erase(vec.begin() + 1, vec.begin() + 3);
        cout << "After erasing a range (index 1 to 2): ";
        print(vec);
    }

    // Access
    if (!vec.empty())
    {
        cout << "Front: " << vec.front() << ", Back: " << vec.back() << endl;
    }

    // Size and capacity
    cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << endl;

    // Check empty
    cout << "Is empty? " << (vec.empty() ? "Yes" : "No") << endl;

    // Clear
    vec.clear();
    cout << "After clear, is empty? " << (vec.empty() ? "Yes" : "No") << endl;

    // Emplace_back
    vec.emplace_back(42);
    cout << "After emplace_back(42): ";
    print(vec);

    // Swap
    vector<int> other = {7, 8, 9};
    vec.swap(other);
    cout << "After swap with {7,8,9}: ";
    print(vec);

    return 0;
}
