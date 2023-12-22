#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(string que , vector <string> &ans , string bracket , int index , vector <string> map) {

    //base case 
    if(index > que.length()-1) {
        ans.push_back(bracket);
        return;
    }

    int num = que[index] - '0'; //we have subtracted zero here because que[index] hume ek ascii value dega cuz jo que hai usme numbers characters/string ki form mai hai to hume us character ki ascii value milegi , isliye hum 0 ke character that is '0' ko subtract karte hai to get the number
    string value = map[num];

    // you need to dry run this for loop in copy to understand how it is working
    // it is written in the notebook tho

    for(int j = 0; j<value.length(); j++) {
        bracket.push_back(value[j]);
        solve(que , ans , bracket , index+1 , map);
        bracket.pop_back();     // this is kind of backtracking thing 
    }

}

int main() {

    vector <string> ans;
    string bracket = "";
    string que = "42";
    int index = 0;
    vector <string> map = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
    // this mapping index  0     1     2       3       4       5       6        7       8        9

    solve(que , ans , bracket , index , map);
  

    for(int i = 0; i<ans.size(); i++) {
        cout<<ans[i]<<endl;
    }
}

