#include<iostream>
using namespace std;

//Decimal to Binary

int decToBinary(int num){
    int pow=1;  //10^0
    int ans=0;
    
    while(num>0){
        int rem=num%2;
        num=num/2;

        ans+=(rem*pow);
        pow*=10;

    }
    return ans;
}


int BinarytoDec(int num){
    int pow=1;    //2^0
    int ans=0;
    
    while(num>0){
        int rem=num%10;
        num=num/10;

        ans+=(rem*pow);
        pow*=2;

    }
    return ans;
}

int main(){
    int num=50;

    //From 1 to 50 Binary conversion

    for(int i=1; i<=num; i++){
        cout<<decToBinary(i)<<endl;
    }

    int n=100000;

    cout<<BinarytoDec(n)<<endl;

    return 0;
}