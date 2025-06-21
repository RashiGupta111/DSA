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

// ✅ Correct way in function: Pass the size separately:

// void myFunc(int arr[], int size) {
//     cout << "Size is: " << size;
// }


//  Dynamic Arrays (VLA / new / vector)

// vector<int> (Modern C++)

// #include <vector>
// vector<int> arr = {1, 2, 3, 4};
// cout << arr.size();  // ✅ Safely gives the number of elements



//--------------------------------------------------------------------------------







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







