#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    int temp[high - low + 1];
    int left = low, right = mid + 1, idx = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
            temp[idx++] = arr[left++];
        else
            temp[idx++] = arr[right++];
    }

    while (left <= mid)
        temp[idx++] = arr[left++];

    while (right <= high)
        temp[idx++] = arr[right++];

    for (int i = 0; i < idx; i++)
        arr[low + i] = temp[i];
}

void merge_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
