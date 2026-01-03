#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "Number  : " << n << endl;

    int rev = 0;

    while (n > 0)
    {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }

    cout << "Reverse :" << rev << endl;

    return 0;
};