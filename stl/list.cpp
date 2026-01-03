#include <bits/stdc++.h>
using namespace std;

// Utility function to print a list
void print(const list<int> &lst)
{
    for (auto x : lst)
        cout << x << " ";
    cout << endl;
}

int main()
{
    list<int> lst = {2, 4, 6};
    lst.push_front(1);
    lst.push_back(8);
    cout << "After push_front and push_back: ";
    print(lst);

    lst.pop_front();
    lst.pop_back();
    cout << "After pop_front and pop_back: ";
    print(lst);

    // Insert at second position
    auto it = lst.begin();
    advance(it, 1);
    lst.insert(it, 3);
    cout << "After insert at index 1: ";
    print(lst);

    // Erase at second position
    it = lst.begin();
    advance(it, 1);
    lst.erase(it);
    cout << "After erase at index 1: ";
    print(lst);

    cout << "Front: " << lst.front() << ", Back: " << lst.back() << endl;
    cout << "Size: " << lst.size() << endl;
    cout << "Is empty? " << (lst.empty() ? "Yes" : "No") << endl;

    lst.clear();
    cout << "After clear, is empty? " << (lst.empty() ? "Yes" : "No") << endl;

    return 0;
}
