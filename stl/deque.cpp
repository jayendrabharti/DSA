#include <bits/stdc++.h>
using namespace std;

// Utility function to print a deque
void print(const deque<int> &dq)
{
    for (auto x : dq)
        cout << x << " ";
    cout << endl;
}

int main()
{
    deque<int> dq = {2, 4, 6};
    dq.push_front(1);
    dq.push_back(8);
    cout << "After push_front and push_back: ";
    print(dq);

    dq.pop_front();
    dq.pop_back();
    cout << "After pop_front and pop_back: ";
    print(dq);

    dq.insert(dq.begin() + 1, 3);
    cout << "After insert at index 1: ";
    print(dq);

    dq.erase(dq.begin() + 2);
    cout << "After erase at index 2: ";
    print(dq);

    cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl;
    cout << "Size: " << dq.size() << endl;
    cout << "Is empty? " << (dq.empty() ? "Yes" : "No") << endl;

    dq.clear();
    cout << "After clear, is empty? " << (dq.empty() ? "Yes" : "No") << endl;

    return 0;
}
