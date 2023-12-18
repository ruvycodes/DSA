#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[] , int size , int key) {

         //base case 
         if(size == 0 ){
            return false;
         }

         if(arr[0]==key) {
            return true;
         }

         else {
            bool check = linearSearch(arr + 1 , size-1 , key);
            return check;
         }

}

int main() {

    int arr[5] = {1, 2, 0, 4, 5};
    int size = 5;

    int key = 5;
    
    bool ans = linearSearch(arr , size , key);
    cout<<boolalpha<<ans<<endl;

}