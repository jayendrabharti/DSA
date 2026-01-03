#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n, int prev, int current)
{
    if (n == 0)
        return;
    cout << prev + current << " ";
    fibonacci(n - 1, current, prev + current);
}

int main()
{
    int n;
    cin >> n;

    if (n <= 2)
    {
        cout << "Input must be bigger than 2." << endl;
        return 0;
    }

    cout << "0 1 ";
    fibonacci(n - 2, 0, 1);

    return 0;
}
