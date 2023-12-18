#include <bits/stdc++.h> 
using namespace std;

// this is merge sort in place method by striver

void merge(vector <int> &arr , int low ,int mid , int high) {

    int left = low;  // pointer that will point at the start of left sub array
    int right = mid+1; // pointer that will point at the start of the right sub array
    // these pointers will be used to compare the elements one by one and store them into a temp vector/array
    vector <int> temp;

    while (left <= mid && right <= high)   // loop chalao tab tak jab tak left pointer mid se chhota hai that is left sub array ke end tak nahi pahuahcha hai and right pointer right sub array ke end that is high tak nahi hai
    {
        if(arr[left] <= arr[right]) {  // if we find a small element on the left sub array , we push it in temp
            temp.push_back(arr[left]);
            left++;                     // increase left pointer by one and keep right at the same
        }   

        else {

            temp.push_back(arr[right]);  // found the small element in right , we push it in temp
            right++;                     // increase right pointer by one and keep left at the same
        }
        
    }

    while(left <= mid) {                 // ye single while loops tabke liye hai jab , koi ek pointer sub array ke end par pahauch jaaye to jo array bachegi (in this case its for left) uske saare elements temp mai push kardo as cross hone ke baad saare elemenets sorted hi honge

         temp.push_back(arr[left]);
            left++;

    }

    while (right <= high) {

        temp.push_back(arr[right]);
            right++;
    }
    
   // dry run the example striver waali video mai to understand this for loop
    for (int i = low; i<=high; i++) {   // this is done to assign the the element at correct indices , temp[i-low] isliye taaki hum sub array jisme agar low = 1 ho ya low = 4 ho to bhi hum usko array ki sahi position par insert kar paaye agar temp[i] kar denge to fir sub array mai agar temp ki starting 4 se hai to kaise kaam hoga? 

         arr[i] = temp[i-low];    // with every iteration i = low+1 , so for 1st iterataion i = low then temp[i-low] = temp[low-low] = temp[0] and it will be assigned to arr[low] , for 2nd iteration i = low+1 then temp[i-low] = temp[low+1-low] = temp[1] and it will be assigned to arr[low+1]

    }

}

void mergesort(vector <int> &arr , int low , int high) {

   //base case
    if (low==high) {  // jab break karte karte ek single element reh jaaye
        return;
    }
    int mid = (low+high)/2;

    mergesort(arr , low , mid );
    mergesort(arr , mid + 1 , high);
    merge(arr , low , mid , high);

}

int main() {

    vector <int> arr = {1,3,3,2,5,4,0,-1};
    int low = 0;
    int high = arr.size()-1;
    mergesort(arr , low , high);
    for (int i = 0 ; i<arr.size(); i++) {
        cout<<arr[i]<< " "<<endl;
    }

}
