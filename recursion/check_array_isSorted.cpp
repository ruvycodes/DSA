// you are given an array and you are supposed to check if the array is sorted or not , by default ascending order

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[] , int size) {

    //base case :
    if (size == 0 || size == 1){ // as ek element ki array ko hum sorted hi maanege 
        return true;
    }

    if (arr[0]> arr[1]) {
        return false;
    }

    if(arr[0]<arr[1]) {
        bool check = isSorted(arr + 1 , size-1);  // array ka base address ek aage shift karke bhej diya
        return check;
    }

}


int main() {

    int arr[5] = {1 , 2 , 0 , 4 , 5 };
    int size = 5;

    bool ans = isSorted(arr , size);

    if(ans == true) 
    cout<<"Array sorted\n"<<endl;

    else 
    cout<<"Array not sorted\n"<<endl;

    return 0;

}