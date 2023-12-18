#include <bits/stdc++.h> 
using namespace std;

int getPivot(vector <int> &arr , int low , int high) {

    int i = low;     // i will check for greater element than pivot
    int j = high;    // j will check for smaller elements than pivot
    int pivot = arr[low];       // array ya sub array ka first element hum pivot maan lenge
  
    while(i<j) {                // loop chalao jab tak i<j

        while (arr[i]<=pivot && i<=high)     // check if there is any element which is greater than pivot element
        {
            i++;                             // increase i by 1 if no element found
        }

         while (arr[j]>pivot && j>=low)     // same with j
        {
            j--;
        }
        
        // both the loops stops when i finds someone greater and j finds someone smaller 

        if(i<j) {
            swap(arr[i] , arr[j]);   // then we swap them here
        }

    }
  
    swap(arr[low] , arr[j]);          // lastly the parent while loop stops when j crosses i and at this point j denotes the correct position of the pivot of an array/subarray so we swap them
    return j;                         // and we return the partition index in this part

}

void quicksrt(vector <int> &arr , int low , int high) {

    //base case ,when the two pointers cross each other , we need to stop
    if(low > high) {
        return;
    }

    int pivotindx = getPivot(arr , low , high);   // pivot ka sahi index le lenge for every array and sub arrays that are produced by recursion
    quicksrt(arr , low , pivotindx-1);            // left half will be from low to pivot-1
    quicksrt(arr , pivotindx+1 , high);           // right half will be from pivot+1 to high
}  

int main() {
    vector <int> arr = {1,3,3,2,5,4,0,-1};
    int low = 0;
    int high = arr.size()-1;
    quicksrt(arr , low , high);

    for (int i = 0; i<arr.size()-1; i++) {
        cout<<arr[i]<< " "<<endl;
    }
}