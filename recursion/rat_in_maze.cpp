#include <bits/stdc++.h>
using namespace std;

bool check(int newx , int newy , vector <vector <int>> maze , vector <vector <int>> rat_visited) {

    if((newx >=0 && newx <4) && (newy >= 0 && newy <4) && (maze[newx][newy] == 1 && rat_visited[newx][newy] == 0) ) {

        return true;

    }

    else {

        return false;
    }
}

void getPath(vector <vector <int>> maze , vector <vector <int>> &rat_visited , vector <string> &ans, int x , int y , string path) {

    //base case 
    if(x == 3 && y == 3) {
        ans.push_back(path);
        return;
    }

    rat_visited[x][y] = 1;

    //up
    if(check(x-1 , y , maze , rat_visited)) {
        path.push_back('U');
        getPath(maze , rat_visited , ans , x-1 , y , path);
        path.pop_back();  // this is backtracking , its impt 
    }

    //down 
    if(check(x+1 , y , maze , rat_visited)) {
        path.push_back('D');
        getPath(maze , rat_visited , ans , x+1 , y , path);
        path.pop_back();
    }

    //left
    if(check(x , y-1 , maze , rat_visited)) {
        path.push_back('L');
        getPath(maze , rat_visited , ans , x , y-1 , path);
        path.pop_back();
    }

    //right 
    if(check(x , y+1 , maze , rat_visited)) {
        path.push_back('R');
        getPath(maze , rat_visited , ans , x , y+1 , path);
        path.pop_back();
    }

    rat_visited[x][y] = 0;       // backtrack when u dont find the path so we revert back changes to the visited matrix

}

int main() {
    vector <vector <int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector <vector<int>> rat_visited = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    vector <string> ans;
    string path = "";
    int x=0;
    int y=0;
    getPath(maze , rat_visited , ans , x , y ,path);
    // sort(ans.begin() , ans.end());

    for(int i = 0; i<ans.size(); i++) {
        cout<<ans[i]<<endl;
    }


}

