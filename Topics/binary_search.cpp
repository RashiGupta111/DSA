#include<iostream>
using namespace std;


int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;

    while(start<=end){

        int mid=start+(end-start)/2;

        if(arr[mid]==key){
            return mid;
        }

        else if(arr[mid] > key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }

    return -1;

}

int main(){

    int even[]={2,3,7,9,2,6,0,4};
    int odd[]={1,2,3,4,7};

    int evenIndex = binarySearch(even, 8, 0);
    int oddIndex = binarySearch(odd, 5, 7);

cout<<"Index of 0:"<<evenIndex<<endl;
cout<<"Index of 7:"<<oddIndex<<endl;

return 0;
}