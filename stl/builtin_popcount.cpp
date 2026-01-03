#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 29; // 11101 in binary
    cout << "x = " << x << endl;
    cout << "__builtin_popcount(x) = " << __builtin_popcount(x) << endl;

    // For long long
    long long y = 123456789012345LL;
    cout << "y = " << y << endl;
    cout << "__builtin_popcountll(y) = " << __builtin_popcountll(y) << endl;

    return 0;
}
