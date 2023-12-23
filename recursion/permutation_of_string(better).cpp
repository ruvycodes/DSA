#include <iostream>
using namespace std;

// this approach is of pepcoding

void solve(string str , string temp) {

    if(str.length()==0) {
        cout<<temp<<endl;
        return;
    }

    // we will take the char at i and divide the string in left from i and right from i then combine them to form a new string without char at i

    for (int i = 0 ; i<str.size(); i++) {
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        string newstr = left + right;    
        solve(newstr , temp+ch);
    }

}

int main() {

    string str = "abc";
    string temp = "";
    solve(str , temp);

}