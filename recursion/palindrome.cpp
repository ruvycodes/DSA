#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i)
{

    // base case :

    if (i > (str.length() - i - 1))
    {
        return true;
    }

    if (str[i] != str[str.length() - i - 1])
    {
        return false;
    }
    i++;

    bool ans = checkPalindrome(str, i);
    return ans;
}

int main()
{

    string str = "11211";
    int i = 0;

    bool ans = checkPalindrome(str, i);
    cout << boolalpha << ans << endl;
}