#include <bits/stdc++.h>
using namespace std;

void quick_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
            i++;
        while (arr[j] > pivot && j >= low + 1)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    int pi = j;

    quick_sort(arr, low, pi - 1);
    quick_sort(arr, pi + 1, high);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Input: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quick_sort(arr, 0, n - 1);

    cout << "Output: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
