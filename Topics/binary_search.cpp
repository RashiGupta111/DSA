// #include<iostream>
// #include <algorithm>

// using namespace std;


// int binarySearch(int arr[], int size, int key){
//     int start=0;
//     int end=size-1;

//     while(start<=end){

//         int mid=start+(end-start)/2;                              //✅ Avoids overflow when start and end are large.
                                                                   
//         if(arr[mid]==key){
//             return mid;
//         }

//         else if(arr[mid] > key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }

//     }

//     return -1;                                               //Indicates element not found.

// }

// int main(){

//     int even[]={2,3,7,9};                        //Sorted array is must for binary search
//     int odd[]={1,2,3,4,7};

//     int un_even[] = {2, 3, 7, 9, 2, 6, 0, 4};
//     // Sort before binary search
//     sort(un_even, un_even + 8);

//     int evenIndex = binarySearch(even, 4, 9);
//     int oddIndex = binarySearch(odd, 5, 7);
//     int un_evenIndex = binarySearch(un_even, 8, 0);

// cout<<"Index of 9:"<<evenIndex<<endl;
// cout<<"Index of 7:"<<oddIndex<<endl;
// cout << "Index of 0: " << un_evenIndex << endl;

// return 0;
// }




// -----------------------------------------------------------------------------------------------------





#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, high, x);
    }
  return -1;
}


int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int key = 1;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;

    return 0;
}