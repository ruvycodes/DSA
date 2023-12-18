#include <bits/stdc++.h> 
using namespace std;

void powerSet(vector <int> input  , vector <vector <int>> &output , vector <int> subsets , int i) {

    // base case 
    if(i > input.size()-1) {
        output.push_back(subsets);
        return;
    }

    // exclusion case 
    powerSet(input , output , subsets , i+1);

    // inclusion case 
    subsets.push_back(input[i]);
    powerSet(input , output , subsets , i+1);



}

int main() {


    vector <int> input = {1,2,3};
    vector <vector <int>> output ;
    vector <int> subsets;
    int i = 0;
    powerSet(input , output , subsets , i);

    cout<<output.size()<<endl;

    for(int i=0; i<output.size(); i++) {

        cout << " {";

        for (int j = 0; j<output[i].size(); j++)
        {
            cout<<output[i][j]<<" ";
        }
        
         cout << "}" << endl;

    }
}