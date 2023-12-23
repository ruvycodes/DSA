#include <bits/stdc++.h>
using namespace std;

// to understand how this dimaag bhosda code is working , make a recursion tree and then uncomment the comments and dry run the code , you will get it , or refer the notebook for solution

void solve(vector <string> &ans , string &que , int index) {

    // base case
    if(index>que.length()-1) {
        ans.push_back(que);
        // cout<<que<<endl;
        return;
    }

    for(int fix=index; fix<que.length(); fix++) {

        // cout<<"index:"<<index<<" fix:"<<fix<<endl;
        swap(que[index] , que[fix]);
        solve(ans , que , index+1);
        // cout<<"returned"<<endl;
        // cout<<"index retur:"<<index<<" fix return:"<<fix<<endl;
        swap(que[index] , que[fix]);   //backtrack

    }

}

int main() {
    vector <string> ans;
    string que = "abc";
    int index = 0;
    solve(ans , que , index);

    for(int i=0; i<ans.size();i++) {
        cout<<ans[i]<<endl;
    }
}