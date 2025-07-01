// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     //To find the length of string 

//     char s[100];
//     int count=0;
//     cout<<"\nEnter the string\n";
//     cin>>s;
//     for(int i=0 ; s[i]!='\0' ; i++){
//         count++;
//     }
//     cout<<"\nCount of the string\n";
//     cout<<count;
// }





//----------------------------------------------------------------------------------------------------------





#include<iostream>
#include<string>

using namespace std;

//To find the length of string 
int getlength(char s[]){

    int count=0;
    
    for(int i=0 ; s[i]!='\0' ; i++){
        count++;
    }
    return count;
}

//To reverse the string
void reverse(char s[], int n){

    int start=0;
    int end=n-1;

    while(start<=end){
        swap(s[start++], s[end--]);
    }

}

//To lowercase the uppercase
char tolowercase (char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}


// //Check Palindrome  (where small and capital letters are treated differently)
// bool palindrome(char s[], int n){

//     int start=0;
//     int end=n-1;

//     while(start<=end){
//         if(s[start]==s[end]){
//             start++;
//             end--;
//         }
//         else{
//             return false;
//         }
//     }
// return true;
// }

//Check Palindrome  (where small and capital letters are treated as same)
bool palindrome(char s[], int n){

    int start=0;
    int end=n-1;

    while(start<=end){
        if(tolowercase(s[start])==tolowercase(s[end])){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
return true;
}

int main(){

char name[100];

cout<<"\nEnter the string\n";
    cin>>name;

//name[2]='\0';

cout<<"\nCount no. of characters in string\n";
    int length = getlength(name);
    cout<<length<<endl;

reverse(name, length);
cout<<"\nReversed string\n";
    cout<<name;

cout<<"\nPalindrome string\n";
cout<< palindrome(name, length);

// cout<<"\nTo lowercase character\n";
// char t= tolowercase('C');
// cout<<t;


}    
