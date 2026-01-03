#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    // Push elements
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Stack after pushes (top to bottom): ";
    stack<int> temp = st;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Top element
    cout << "Top element: " << st.top() << endl;

    // Pop
    st.pop();
    cout << "After pop, top: " << st.top() << endl;

    // Size
    cout << "Size: " << st.size() << endl;

    // Empty
    cout << "Is empty? " << (st.empty() ? "Yes" : "No") << endl;

    // Clear stack
    while (!st.empty())
        st.pop();
    cout << "After clearing, is empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}
