// this approach uses one pointer only 

// Approach 1 : 

#include <bits/stdc++.h>
using namespace std;

string reverseStringRuv(string str, int i)
{

    // base case :

    if (i > str[str.length()-1])          // we are using a single pointer to compare it 
    {
        return str;
    }

    swap(str[i], str[str.length()-1]);   // in built funciton of c++ to swap values
    i++;
    string check = reverseStringRuv(str, i);
    return check;
}

// Approach 2 :

void reverseStringBabbar(string &str , int i) {

    // base case :

    if(i > (str.length()-i-1)) {
        return ;
    }

    swap(str[i] , str[str.length()-i-1]);

    i++;
    reverseStringBabbar(str , i);

}

int main()
{
    string text = "FUCKER";
    int i = 0;
    reverseStringBabbar(text, i);
    cout<<text<<endl;
    
}



