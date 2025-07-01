#include<iostream>
using namespace std;

int main(){
    //int arr[]={2,3,7,9,2,6,0,4,5};

    int arr[]={1,2,3,4,7,9};
    int temp;
    int size=sizeof(arr)/sizeof(arr[0]);
    bool flag_swap; 

    for (int i=0; i<size; i++)                         //Outer loop run from 0 to size-1
    {
         
        flag_swap=false;                  //Flag is given Inside the loop so it can reset it to false in the next pass.

        for(int j=0; j<size-i-1; j++)                   //Inner loop run from 0 to size-pass
        {
              
            if(arr[j]>arr[j+1])
            {
                flag_swap=true;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                
            }
        }

        if (i == 0 && !flag_swap) {
            cout << "Already sorted" << endl;
            break;

         if(flag_swap == false)
            break;
        }
    }

    cout<<"Sorted Array  ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

return 0;

}