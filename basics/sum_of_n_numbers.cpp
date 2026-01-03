#include <bits/stdc++.h>
using namespace std;

int sumByRecursion(int n)
{
    if (n == 1)
        return 1;

    return sumByRecursion(n - 1) + n;
};

int main()
{
    int n = 50;

    int sum1 = n * (n + 1) / 2;

    int sum2 = 0;

    for (int i = 1; i <= n; i++)
        sum2 += i;

    int sum3 = sumByRecursion(n);

    cout << "Sum 1: " << sum1 << endl;
    cout << "Sum 2: " << sum2 << endl;
    cout << "Sum 3: " << sum3 << endl;

    return 0;
};