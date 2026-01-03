#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int start, int end)
{
    if (start >= end)
        return true;
    else if (str[start] == str[end])
        return isPalindrome(str, start + 1, end - 1);
    else
        return false;
}

int main()
{
    string str;
    getline(cin, str);

    if (isPalindrome(str, 0, str.size() - 1))
        cout << "Is a palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}
