// find the sum of a given array

#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int size)
{

    // base case :
    if (size == 1)
    {
        return arr[0];
    }

    int sum = sumArray(arr + 1, size - 1);
    int ans = sum + arr[0];

    return ans;
}

int main()
{

    int arr[5] = {1, 2, 0, 4, 5};
    int size = 5;

    int ans = sumArray(arr, size);
    cout << ans << endl;

    return 0;
}