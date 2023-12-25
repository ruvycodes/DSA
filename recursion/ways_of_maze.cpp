#include <bits/stdc++.h>
using namespace std;

// in a maze of 3x3 there are no obstacles you are at 0,0 and you have to reach 2,2 , only valid moves are right and down

// 1st method by me

void solve(vector <vector<int>> rat , int &count , int x, int y) {

    if((x>=0 && y>=0) && (x<3 && y<3)) {  // taaki rat matrix se bahar na nikle

    //base case 
    if(x == 2 && y == 2) {
        count++;
        return;
    }

    solve(rat , count , x+1 , y);  // call for down
    solve(rat , count , x , y+1);  // call for right

    }

}

int main() {
    vector <vector<int>> rat_visited = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int count =0;
    int x =0 , y = 0;

    solve(rat_visited , count , x , y);

    cout<<count<<endl;
}


// 2nd method , kunal kushwaha

int solve(vector <vector<int>> rat , int x , int y) {
    

        //base case 
        if(x==2 || y == 2) {   // his base case is if u reach either the last column or the last row , you will have only 1 way , last row ke liye you will only move right so 1 way ho gaya and last column ke liye you will only move down so one way ho gaya
            return 1;          // isme wo matrix se bahar waali condition isliye nahi daali cuz , isne last column and last row par hi base case de diya to wo wahi ruk jaayega
        }

        int right = solve(rat  , x , y+1);
        int down = solve(rat  , x+1 , y);

        return right + down;
 

}

int main() {
    vector <vector<int>> rat_visited = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int count =0;
    int x =0 , y = 0;

    count = solve(rat_visited , x , y);

    cout<<count<<endl;

}