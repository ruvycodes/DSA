#include <bits/stdc++.h>
using namespace std;

void func(string question , vector <string> &ans , int i , string output) {

       //base case 
       if(i>question.length()-1) {
             ans.push_back(output);
             return;
       }


       //exclusion :
       func(question , ans , i+1 , output);

       //inclusion :
       output.push_back(question[i]);
       func(question , ans , i+1 , output);


}

int main() {

    string question = "abc";
    int i = 0;
    vector <string> ans;
    //output basically humaara wo extra bracket ya extra {} hai jisme hum included waale elements ko store karte jaayenge
    string output = "";

    func(question , ans , i , output);

    for (int i = 0; i<ans.size(); i++) {
        cout<<ans[i]<<endl;
    }
}