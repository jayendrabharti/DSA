#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void reverseArray(int *arr, int start, int end)
{
    if (start >= end)
        return;
    else
        swap(arr[start], arr[end]);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array: ";
    print(arr, n);

    reverseArray(arr, 0, n - 1);

    cout << "Reversed: ";
    print(arr, n);

    return 0;
}
