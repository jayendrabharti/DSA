#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    bool isPalindrome = true;

    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Is a palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}
