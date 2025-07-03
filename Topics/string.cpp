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
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

//--------------------------------------------------------

// ✅ Use the standard library:

// #include <cctype>

// temp[j] = tolower(temp[j]);

//--------------------------------------------------------


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

//-----------------------------------------------------------------------------------------------------------------------

//Valid Palindrome

// ✅ Checking if a string is a valid palindrome, ignoring non-alphanumeric characters and case.


// 1.Filter valid characters into a temp string.

// 2.Convert to lowercase.

// 3.Check if temp is a palindrome using checkpalindrome.



//Valid character
bool valid(char ch){

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
        return 0;
}

bool checkpalindrome(string s){

    int start=0;
    int end=s.length()-1;

    while(start<=end){
        if((s[start])==(s[end])){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
return true;
}


//New temp string to store the valid character string only

bool palindrome(string s){

    string temp ="";

    for(int i=0 ; i<s.length() ; i++){
        if (valid (s[i])){
           temp.push_back(s[i]);
    }
  }
    for(int j=0 ; j<temp.length() ; j++){

        temp[j]=tolowercase(temp[j]);

    }
    return checkpalindrome(temp);
}


char getmaxoccurchar(string s){
    
    int arr[26]={0};

//Create an array of count of characters
    for(int i=0;  i<s.length(); i++){

        char ch=s[i];
        int num=0;

        // num=ch-'a';                               //Without if else use direct this, to optimize if all are in lowercase

        if(ch>='a' && ch<='z'){
            num=ch-'a';
        }
        else{
            num=ch-'A';
        }


        arr[num]++;
    }

//Find maximum occurence character    
    int maxi=-1;
    int ans=0;
    for(int i=0; i<26; i++){

        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

return ans+'a';

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

cout<<"\nPalindrome char array\n";
cout<< palindrome(name, length);

string st="A man, a plan, a canal: Panama";
cout<<"\nValid Palindrome string \n";
cout<< palindrome(st)<<endl;

string s;
    cout << "Enter a string: ";

    //If you previously used
    // cin leaves a \n (newline) in the input buffer after reading input.

// When getline(cin, s) is called:

// It immediately reads this leftover \n as the end of input.

// s becomes an empty string "".

//Otherwise, if not do so ignore , then it won't take input as it is getting '\0'

    cin.ignore();               // <-- FIX: clear leftover newline
    getline(cin, s);

    char max = getmaxoccurchar(s);
    cout<<"\nMaximum occuring character in string  "<<max;

    if (palindrome(s)) {
        cout << "\nValid Palindrome" << endl;
    } else {
        cout << "\nNot a Palindrome" << endl;
    }

cout<<"\nTo lowercase character\n";
char t= tolowercase('C');
cout<<t;

}

//----------------------------------------------------------------------------------------------------------------


// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
// std::string S("Hey");
// S.push_back('\0');                                  //If you explicitly add null character then it terminates on encountering it.
// S.append("Jude");

// for(int i = 0; S[i] != '\0'; ++i)
//     std::cout << S[i];

// cout<<"\n";

// std::string Str("Hey");
// Str.append("Jude");                                                   //But internally null character do not terminate the string.

// for(int i = 0; Str[i] != '\0'; ++i)
//     std::cout << Str[i];

// }    

//--------------------------------------------------------------------------------------

//Fore more reference to string visit: https://cplusplus.com/reference/string/string/

//--------------------------------------------------------------------------------------






