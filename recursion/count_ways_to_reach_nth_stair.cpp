// n stairs hai tum 0th par ho , tum ya to ek baar mai ek stair chadh sakte ho ya 2 , and dono co combine karke bhi chadh sakte ho , now in how many possible ways you can climb to the nth stair?


#include <iostream>
using namespace std;

int stairMan(int n) {
    
    //base case :
     if(n==0 || n==1 || n==2) {   // 0 par ho to 0 way , 1 par ho to ek hi stair hai matlab ek way , 2 par ho to 2 hi way hai so 2 ways
        return n;
     }
  
     // recursive call
     int ways = stairMan(n-1) + stairMan(n-2);   // try to draw the recursive tree , and then u will understand why , f(n) = f(n-1) + f(n-2)

     return ways;

}

// the reccureence relation is : f(n) = f(n-1) + f(n-2) for nth stair 

int main() {

    int ans=0;
    ans = stairMan(5);
    cout<<ans<<endl;

}

// this solution need to be optimized with dp for large cases , as it will exceed time limit