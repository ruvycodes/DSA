#include <bits/stdc++.h>
using namespace std;

double calcPower(double a, int n)
{

    // base case :

    if (n == 0)
    {
        return 1;
    }

    else if (n < 0)
    {
        return 1.0 / (a * calcPower(a, -(n + 1)));
    }

    else if (n % 2 == 0)
    {
        double y = calcPower(a, n / 2);
        return y * y;
    }

    else
    {
        return a * calcPower(a, n - 1);
    }
}

int main()
{

    double a = 0;
    int n = 0;

    cin >> a;
    cin >> n;

    double ans = calcPower(a, n);
    cout << ans << endl;
}