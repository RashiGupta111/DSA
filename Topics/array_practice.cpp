
//✅ Find the sum of all array elements

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int sum=0;
//     for(int i=0; i<5; i++){
//         sum+=arr[i];
//     }
//     cout<<"Sum of all the elements are "<< sum<<endl;
// }



// --------------------------------------------------------------------------------


//✅ Find the number of elements in the array

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[100]={1,2,3,4,5,7};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     cout<<"Elements in the array are "<< size;
// }




// ------------------------------------------------------------------------------

// sizeof(arr) gives total bytes of the array.

// sizeof(arr[0]) gives bytes of one element.

// -------------------------------------------------------------------------------





// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3};
//     int size=sizeof(arr)/sizeof(arr[2]);

//     cout<<"Elements in the array are "<< size;
// }


// ------------------------------------------------------------------------------


//✅ Find the average of array elements

// #include <iostream>
// using namespace std;

// int sum(int arr[], int n) {
//     int sum = 0;
//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// double avg(int arr[], int n) {
//     double avg= (double)sum(arr, n) / n;  // Avg = Sum of all Elements / Total Elements
//     return avg;
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Sum of elements: " << sum(arr, n) << endl;
//     cout << "Average of elements: " << avg(arr, n) << endl;

//     return 0;
// }






//--------------------------------------------------------------------------------


// Arrays passed to functions

// like this is wrong

// void myFunc(int arr[]) {
//     int size = sizeof(arr) / sizeof(arr[0]); // ❌ WRONG!
// }

// Why this fails:

// -- arr decays to a pointer inside the function.

// -- So sizeof(arr) gives size of a pointer (typically 4 or 8 bytes), not the array.

//  Correct way in function: Pass the size separately:

// void myFunc(int arr[], int size) {
//     cout << "Size is: " << size;
// }


//  Dynamic Arrays (VLA / new / vector)

// vector<int> (Modern C++)

// #include <vector>
// vector<int> arr = {1, 2, 3, 4};
// cout << arr.size();  // ✅ Safely gives the number of elements



//--------------------------------------------------------------------------------




//✅ Find the maximum and minimum element in the array



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,0,-1};
//     int size= sizeof(arr)/sizeof(arr[0]);

//     int min=arr[0];

//     for(int i=1; i<size; i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"Minimum element "<<min<<endl;

//     int max=arr[0];

//     for(int i=1; i<size; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"Maximum element "<<max<<endl;
// }





//--------------------------------------------------------------------------------



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,0,-1};
//     int size= sizeof(arr)/sizeof(arr[0]);

//     int max=arr[0];

//     for(int i=1; i<size; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"Maximum element "<<max;
// }






//--------------------------------------------------------------------------------


//✅ Count occurrences of a given element


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={0,0,1,2,3,4,2,5,0,-1};
//     int size= sizeof(arr)/sizeof(arr[0]);

//     int count=0;
//     int element=0;

//     for(int i=0; i<size; i++){
//         if(arr[i]==element){
//           count++;
//         }
//     }
//     cout<<"Occurence of given element "<<count;
// }




//--------------------------------------------------------------------------------



//✅ Reverse the entire array


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={0,1,2,3,4};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     int brr[size];

//     cout<<"Original array elements : ";
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     for(int i=0; i<size; i++)
//     {
//        brr[size-1-i]=arr[i];

//     }

//     cout<<"\n Reverse the elements of array : ";
//     for(int i=0; i<size; i++)
//     {
//         cout<<brr[i]<<" ";
//     }
// }




//--------------------------------------------------------------------------------



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={0,0,1,2,3,4,2,5,0,-1,9};
//     int size= sizeof(arr)/sizeof(arr[0]);

//     cout<<"Original array elements : ";
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     int temp;
//     int start=0;
//     int end=size-1;

//     //Two pointer approach


//     while(start<=end){
//             temp=arr[start];
//             arr[start]=arr[end];
//             arr[end]=temp;
//             start++;
//             end--;
//     }

//     cout<<"\n Reverse array elements : ";
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }


// }



//--------------------------------------------------------------------------------


//✅ Print the even and odd elements


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(arr[0]);

//  cout<<"The even elements are :";
//     for(int i=0; i<size; i++){
//         if(arr[i]%2==0){
//             cout<<arr[i]<<" ";
//         }
//     }
//  cout<<"\n The odd elements are :";
//     for(int i=0; i<size; i++){
//         if(arr[i]%2!=0){
//             cout<<arr[i]<<" ";
//         }
//     }

// }
   





//--------------------------------------------------------------------------------


//✅ Check if duplicates exist in the array



// //Use early return, i.e return 0 after you need to stop further execution, otherwise "No duplicate element exist" is still printed always❌ 



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,6,2,3,0};
//     int size=sizeof(arr)/sizeof(arr[0]);

//     int element = 0;
//     int count=0;

//     for(int i=0; i<size; i++)
//     {
//         if(arr[i]==element){
//             count++;
//             if(count>1)
//             {
//                cout<<"Duplicate element exist";
//                return 0;
//             }
//         }
       
//     }
//      cout<<"No duplicate element exist";
//      return 0;
// }
   




//--------------------------------------------------------------------------------

// // or can Use a flag


// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 2, 3, 0};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int element = 3;
//     int count = 0;
//     bool found = false;

//     for (int i = 0; i < size; i++) {
//         if (arr[i] == element) {
//             count++;
//             if (count > 1) {
//                 cout << "Duplicate element exists" << endl;
//                 found = true;
//                 break;
//             }
//         }
//     }

//     if (!found) {
//         cout << "No duplicate element exists" << endl;
//     }

//     return 0;
// }






//--------------------------------------------------------------------------------

//✅ Find the second largest element in the array


// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {9,1, 2, 4, 6, 6, 5, 0};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     if (size < 2) {
//         cout << "Array must have at least two elements." << endl;
//         return 0;
//     }

//     int max, smax;

//     // Initialize max and smax properly
//     if (arr[0] > arr[1]) {
//         max = arr[0];
//         smax = arr[1];
//     } else {
//         max = arr[1];
//         smax = arr[0];
//     }

//     // Traverse from index 2
//     for (int i = 2; i < size; i++) {
//         if (arr[i] > max) {
//             smax = max;
//             max = arr[i];
//         } else if (arr[i] > smax && arr[i] != max) {
//             smax = arr[i];
//         }
//     }

//     cout << "Maximum Element: " << max << endl;
//     cout << "Second Maximum Element: " << smax << endl;

//     return 0;
// }




// --------------------------------------------------------------------------------


// If You initialize smax = arr[0], i.e., the same as max. This can lead to wrong results when:

// --The first element is the maximum,

// --Or the second maximum is smaller than the first element.


// Edge Cases Handled:
// -------------------

// --Works even if the first element is the max.

// --Avoids reporting same max twice as second max.

// --Assumes at least two distinct elements.




//-----------------------------------------------------------------------------------





// But for this input
// int arr[] = {9, 9, 1, 2, 4, 6, 6, 5, 0};

// is giving output

// Maximum Element: 9
// Second Maximum Element: 9

// since the first two elements are equal (9, 9), smax is set to 9 too


// --------------------------------------------------------------------------------------------





// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {9, 9, 1, 2, 4, 6, 6, 5, 0};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     if (size < 2) {
//         cout << "Array must have at least two elements." << endl;
//         return 0;
//     }

//     int max = arr[0];
//     int smax = -1; // or INT_MIN if negative numbers allowed

//     // First pass: find max
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     // Second pass: find largest element less than max
//     for (int i = 0; i < size; i++) {
//         if (arr[i] < max) {
//             if (smax == -1 || arr[i] > smax) {
//                 smax = arr[i];
//             }
//         }
//     }

//     cout << "Maximum Element: " << max << endl;
//     if (smax != -1)
//         cout << "Second Maximum Element: " << smax << endl;
//     else
//         cout << "No second maximum (all elements are equal)." << endl;

//     return 0;
// }





//-------------------------------------------------------------------------------------------------