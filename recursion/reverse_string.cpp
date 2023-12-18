#include <bits/stdc++.h>
using namespace std;


// basically what we are doing is we took two pointers one at the start of the string and the other at the end of the string , then we keep swapping the values at those location through these strings , so we are reversign the string increasing the pointers , so as the two pointers cross each other we stop

string reverseString(string str, int i, int j)
{

    // base case :

    if (i > j)               // we are using the two pointer appraoch here so when they cross each other we stop
    {
        return str;
    }

    swap(str[i], str[j]);   // in built funciton of c++ to swap values
    i++;
    j--;
    string check = reverseString(str, i, j);
    return check;
}

// this approch is using the in built method to reverse a string in c++ :

string reverseDefault(string str) {

     reverse(str.begin() , str.end());
     return str;

}

int main()
{

    string text = "FUCKER";
    int i = 0;
    int j = text.length() - 1; // as we need the index so we subtract 1

    string answer = reverseString(text, i, j);
    cout<<answer<<endl;
    
}



