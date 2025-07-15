#include<iostream>

using namespace std;

void bubblesort(int arr[], int n){        // O(n^2)

    for(int i=0; i<n-1; i++){
        bool isSwap=false;

        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){                        //For decreasing order: if(arr[j]<arr[j+1])
                swap(arr[j], arr[j+1]);
                isSwap=true;
            }
        }

    // for(int i=0; i<n; i++){                      //To check each parse
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


        if(!isSwap){                          // Array is already sorted
            return;
        }
    }

}


void selectionsort(int arr[], int n)   //O(n^2)
{
    for(int i=0; i<n-1; i++){

        int smallestIndex=i;                           //Unsorted part starting index

        for(int j=i+1; j<n; j++){                       //Traverse the rest of the elements and check smallest index value 
            if(arr[j] < arr[smallestIndex])             //For decreasing order : if(arr[j] > arr[smallestIndex])
             smallestIndex = j;
        }

        swap(arr[i], arr[smallestIndex]);               //Means we place the smallest index value at the start of unsorted array 
    }

}

void insertionsort(int arr[], int n)   //O(n^2)
{
    for(int i=1; i<n; i++){
        int cur=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>cur){               //Change arr[prev]<cur this condition for decreasing order
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=cur;                      //placing current element in it's correct position
    }
    
}

void insertion_sort(int arr[], int n){     //O(n^2)
    for(int i=1; i<n; i++){
        int temp=arr[i];
        int j=i-1;

        for( ; j>=0; j--){
            if(arr[j]>temp){                                  //For decreasing order: if(arr[j]<temp)
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={4,8,2,5,1,9,0};
    // int arr[]={1,2,3,4,5,6,7};

    int n=sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr,n);

    printArr(arr,n);
}


