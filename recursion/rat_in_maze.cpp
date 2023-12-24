#include <bits/stdc++.h>
using namespace std;

bool check(vector <vector <int>> maze , vector <vector <int>> &rat_visited , int x , int y) {

    if(maze[x][y] == 1 && x>=0 && y>=0 && x<4 && y<4 && rat_visited[x][y] == 0 ) {
        
        return true;

    }

    else {

        return false;
    }

}

void getPath(vector <string> &ans,vector <vector <int>> maze , vector <vector <int>> &rat_visited , string path , int x , int y) {

        //base case :
        if(x == 3 && y == 3) {
            ans.push_back(path);
            return;
        }

        rat_visited[x][y] = 1;

        int newx;
        int newy;

        //up
        newx = x-1;
        newy = y;
        if(check(maze , rat_visited , newx , newy)) {
            path.push_back('U');
            getPath(ans , maze , rat_visited , path , newx , newy);   
            path.pop_back();
        }

        //down
        newx = x+1;
        newy = y;
        if(check(maze , rat_visited , newx , newy)) {
            path.push_back('D');
            getPath(ans , maze , rat_visited , path , newx , newy);
            path.pop_back();

        }

        //left
        newx = x;
        newy = y-1;
        if(check(maze , rat_visited , newx , newy)) {
            path.push_back('L');
            getPath(ans , maze , rat_visited , path , newx , newy);
            path.pop_back();

        }

        newx = x;
        newy = y+1;
        if(check(maze , rat_visited , newx , newy)) {
            path.push_back('R');
            getPath(ans , maze , rat_visited , path , newx , newy);
            path.pop_back();

        }

        rat_visited[x][y] = 0;

}

int main() {
     vector <vector <int>> maze = {{1, 0,0,0}, {1, 1,0,1}, {1, 1,0,0}, {0, 1,1,1}};
     vector <vector <int>> rat_visited = {{0, 0,0,0}, {0, 0,0,0}, {0, 0,0,0}, {0, 0,0,0}};
     vector <string> ans;
     string path = "";
     int x=0;
     int y=0;

     getPath(ans ,maze , rat_visited , path , x , y);

     for(int i = 0 ; i < ans.size(); i++) {
        cout<<ans[i]<<endl;
     }
     

}

