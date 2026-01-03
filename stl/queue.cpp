#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    // Push elements
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Queue after pushes (front to back): ";
    queue<int> temp = q;
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Front and back
    cout << "Front: " << q.front() << ", Back: " << q.back() << endl;

    // Pop
    q.pop();
    cout << "After pop, front: " << q.front() << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    // Empty
    cout << "Is empty? " << (q.empty() ? "Yes" : "No") << endl;

    // Clear queue
    while (!q.empty())
        q.pop();
    cout << "After clearing, is empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}
