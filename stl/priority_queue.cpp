#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Max-heap (default)
    priority_queue<int> maxpq;
    maxpq.push(5);
    maxpq.push(1);
    maxpq.push(10);
    maxpq.push(3);
    cout << "Max-heap priority_queue: ";
    priority_queue<int> temp = maxpq;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Min-heap
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(5);
    minpq.push(1);
    minpq.push(10);
    minpq.push(3);
    cout << "Min-heap priority_queue: ";
    while (!minpq.empty())
    {
        cout << minpq.top() << " ";
        minpq.pop();
    }
    cout << endl;

    return 0;
}
