
//                     //C++ STL

// --------------------------------------------------------------------------------------
// //Static array

// #include<iostream>
// #include<array>

// using namespace std;

// int main(){
//     array<int,5>arr ={1,2,3,4};

//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<"\nElement at 3rd index  "<<arr.at(3)<<endl;
//     cout<<"\nFirst Element  "<<arr.front()<<endl;
//     cout<<"\nLast Element   "<<arr.back()<<endl;
//     cout<<"\nEmpty or not  "<<arr.empty()<<endl;

// }



// --------------------------------------------------------------------------------------



//Dynamic array

// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int>v;

//     vector<int>a (5,1);
//     for(int i:a){
//         cout<<i<<endl;
//     }
//     //If we want to copy a vwctor in other vector like b

//     cout<<"Copy of vector a in vector b"<<endl;
//     vector<int>b (a);
//     for(int i:b){
//         cout<<i<<endl;
//     }

//     cout<<"\nVector Capacity  "<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"\nVector Capacity  "<<v.capacity()<<endl;

//     v.push_back(2);
//     cout<<"\nVector Capacity  "<<v.capacity()<<endl;

//     v.push_back(3);
//     cout<<"\nVector Capacity  "<<v.capacity()<<endl;

//     cout<<"\nVector Size  "<<v.size()<<endl;

//     cout<<"\nElement at 2nd index  "<<v.at(2)<<endl;
//     cout<<"\nFirst Element  "<<v.front()<<endl;
//     cout<<"\nLast Element   "<<v.back()<<endl;
//     cout<<"\nEmpty or not  "<<v.empty()<<endl;

//     //Before Pop

//     cout<<"\nBefore Pop "<<endl;
//     for(int i=0; i<v.size(); i++){
//         cout<<endl<<v[i]<<" ";
//     }

//     v.pop_back();

//     //After Pop

//     cout<<"\nAfter Pop "<<endl;

//     for(int i:v){
//         cout<<endl<<i<<" ";
//     }

//     cout<<"\n Before clearing size "<<v.size()<<endl;

//     v.clear();

//     cout<<"\n After clearing size "<<v.size()<<endl;

// }



// --------------------------------------------------------------------------------------


// //Deque(Doiuble Ended Queue)

// #include<iostream>
// #include<deque>

// using namespace std;

// int main(){

//     deque<int>d;
//     d.push_back(1);
//     d.push_front(2);

//     cout << "Deque elements: ";
//     for (int i:d) {
//         cout<<i<<" ";
//     }
    
//     //d.pop_back();
//     // d.pop_front();

//     //  for (int i:d) {
//     //     cout<<"\n"<<i<<" ";
//     // }

//     cout<<"\nFirst element "<<d.front();
//     cout<<"\nLast element "<<d.back();
//     cout<<"\nElement at 1st index "<<d.at(1);

//     cout<<"\nEmpty or not "<<d.empty();

//     d.push_back(3);
//     d.push_front(4);

//     cout << "\nDeque after pushing 4 front and 3 back: ";
//     for (int i:d) {
//         cout<<i<<" ";
//     }

//     //The clear() function is used to remove all the elements of the deque container, thus making its size 0. 

//     // d.clear();
//     // cout << "\nDeque cleared.";

//     // cout<<"\nDeque size "<<d.size();

//     // cout << "\nNow, deque elements: ";
//     // for (int i:d) {
//     //     cout<<i<<" ";
//     // }


//     //The erase() function is used to remove elements from a container from the specified position or range.
//     // 1. dequename.erase(position)
//     // 2. dequename.erase(startingposition, endingposition)

//     d.erase(d.begin(),d.begin()+1);

//     cout << "\nElements cleared of specific position.";

//     cout<<"\nDeque size "<<d.size();

//     cout << "\nNow, deque elements: ";
//     for (int i:d) {
//         cout<<i<<" ";
//     }

//     return 0;

// }






// --------------------------------------------------------------------------------------


// //List(Doiubly Linked List)

// #include<iostream>
// #include <algorithm>                        //Find algo is used
// #include<list>

// using namespace std;

// int main(){

//     list<int>l;

//     l.push_back(1);
//     l.push_front(2);

//     cout<<"\nElements of list l";
//     for(int i: l){
//         cout<<"\n"<<i;
//     }

    
//     //Copy list l in another new list n

//     list<int>n(l);
//     cout<<"\nElements of list n";
//     for(int i: n){
//         cout<<"\n"<<i;
//     }


//     //Make list by giving (no of elements, value of all elements)

//     list<int>k(5,1000);
//     cout<<"\nElements of list k";
//     for(int i: k){
//         cout<<"\n"<<i;
//     }


//     cout<<"\nsize of l "<<l.size();
//     cout<<"\nsize of n "<<n.size();
//     cout<<"\nsize of k "<<k.size();


//     l.erase(l.begin());

//     cout<<"\nAfter erase ";
//     for(int i: l){
//         cout<<"\n"<<i;
//     }

//     cout<<"\nBefore update ";
//     for(int i: l){
//         cout<<"\n"<<i;
//     }

//     l.front() = 11;

//     cout<<"\nAfter update ";
//     for(int i: l){
//         cout<<"\n"<<i;
//     }

//     cout<<"\nsize of l "<<l.size()<<endl;

//     cout<<endl;

//     list<int> e = {1, 3, 2, 8, 9};

//     auto it= find(e.begin(),e.end(),8);           //auto saves you from writing long type.     list<int>::iterator it = ...  
//     if (it != e.end()) cout << *it;
//     else cout << "Element Not Found!";

// }


// // ✅ k.end() is an iterator that points one position past the last element of the container k.
// // ✅ It does not point to a valid element you can access using *it.
// // ✅ It is used to indicate “not found” or “end of container”.

// // 5️⃣ Analogy
// // 🔹 Think of k.end() as “the door out of the container.”
// // If you go looking for something and end up outside the container (k.end()), it means you didn’t find it inside.

// // Hence, you must check:

// // “Did I go outside the container? If yes, it’s not found.”






// --------------------------------------------------------------------------------------


// //Stack(LIFO)

// #include<iostream>
// #include<stack>

// using namespace std;

// int main(){

//     stack<string>s;
//     s.push("Miss");
//     s.push("Rashi");
//     s.push("Gupta");

    
// //✅ Preserving the Original Stack in new stack named temp

//     stack<string> temp = s;  // Copy stack

//     cout<<"\nSize of copied stack "<<temp.size()<<endl;

//     while (!temp.empty()) {
//     cout << temp.top() << endl;
//     temp.pop();
//     }

//     cout<<"\nElement at the top of original stack "<<s.top();

//     cout<<"\nSize of original stack "<<s.size();


//     cout << "\nPrint the elements in the stack (top to bottom):\n";

//     while (!s.empty()) {
//         cout << s.top() << endl;
//         s.pop();
//     }

//     cout<<"\nSize of original stack "<<s.size();             //0 because while printing all elements popped out.

//     cout<<"\nIf stack empty or not "<<s.empty();           //1 because yes it's empty

// }







// --------------------------------------------------------------------------------------





// //Queue(FIFO)

// #include<iostream>
// #include<queue>

// using namespace std;

// int main(){

//     queue<string>q;

//     q.push("Miss");
//     q.push("Rashi");
//     q.push("Gupta");

//     cout<<"\nSize of queue  :  "<<q.size()<<endl;

//     cout<<"\nFirst Element  :  "<<q.front()<<endl;
//     q.pop();
//     cout<<"\nNext element comes out after pop  : "<<q.front()<<endl;

//     cout<<"\nSize of queue  :  "<<q.size()<<endl;

//     cout<<"\nEmpty queue or not :  "<<q.empty()<<endl;

// }





// --------------------------------------------------------------------------------------




// //Priority Queue

// #include<iostream>
// #include<queue>

// using namespace std;

// int main(){

//     priority_queue<int>p;

//     //Max Heap
//     priority_queue<int>max;

//     //Min Heap
//     priority_queue<int, vector<int>, greater<int> >min;
//                                                                                                //Can select and change multiple elements at same time in vs code 
//     max.push(5);
//     max.push(1); 
//     max.push(4);
//     max.push(0);
//     max.push(3);
//     max.push(2);

// //Before printing elements
//     cout<<"\nSize of max heap  "<<max.size()<<endl;

//     int n=max.size();

//     for(int i=0; i<n ; i++){
//         cout<<max.top()<<" ";
//         max.pop();
//     }
//     cout<<endl;

// //After printing elements
//     cout<<"\nSize of max heap  "<<max.size()<<endl;

//     min.push(5);
//     min.push(1); 
//     min.push(4);
//     min.push(0);
//     min.push(3);
//     min.push(2);

// //Before printing elements
//     cout<<"\nSize of max heap  "<<min.size()<<endl;

//     int m=min.size();

//     for(int i=0; i<m ; i++){
//         cout<<min.top()<<" ";
//         min.pop();
//     }
//     cout<<endl;

// //After printing elements
//     cout<<"\nSize of max heap  "<<min.size()<<endl;

//     cout<<"\nEmpty or not  "<<min.empty()<<endl;

// }




// --------------------------------------------------------------------------------------




// //Set

// #include<iostream>
// #include<set>

// using namespace std;

// int main(){

//     set<int>s;

//     s.insert(4);
//     s.insert(3);
//     s.insert(8);
//     s.insert(3);
//     s.insert(0);
//     s.insert(1);
//     s.emplace(2);                     //Also used as insert

//     for(auto i: s){
//         cout<<i<<" ";
//     }cout<<endl;

//     // Accessing first element
//     cout<<"\nFirst Element  "<<endl; 

//     auto it1 = s.begin();
//     cout << *it1 <<endl;
    
//     // Accessing third element
//     cout<<"\nThird element  "<<endl; 

//     auto it2 = next(it1, 2);                                       //auto it2 = next(s.begin(), 2);   next() or advance() is used to get next elements
//     cout << *it2<<endl;

//     cout<<"\nAfter erasing  "<<endl; 

//     s.erase(s.begin());

//     for(auto i: s){
//         cout<<i<<" ";
//     }

//    // s.erase(s.begin()+1);         causes compilation error
// //    ✅ Why this happens:
// //        std::set does not support random access iterators (like +, [], .at()).

// //        It only provides bidirectional iterators (you can use ++it or --it), not it + 1.


// // ✅ To remove a specific element by value:

// // s.erase(value);

// // ✅ To remove by position:

// // auto it = s.begin();
// // advance(it, pos);
// // s.erase(it);


// // Updating Elements
// // We cannot change the value of elements once they are stored in the set.



// cout<<"\nAfter erasing 3rd element "<<endl; 

// set<int>::iterator it= s.begin();                       //First element remove krne k liye use it
// it++;                                                  //Second element remove krne k liye
// it++;                                                 //Third element remove krne k liye

// s.erase(it);

//     for(auto i: s){
//         cout<<i<<" ";
//     }



//  cout << "\nAfter erasing 2nd element:\n";

//     auto its = s.begin();
//     advance(its, 1);  // ✅ Move iterator to second element

//     s.erase(its);     // ✅ Erase the second element

//     for (auto i : s) {
//         cout << i << " ";
//     }

//  cout << "\n5 is present or not:\n"<<s.count(5);
//  cout << "\n is present or not:\n"<<s.count(0);
//  cout << "\n-3 is present or not:\n"<<s.count(-3);
//  cout << "\n1 is present or not:\n"<<s.count(1);
 
//  s.insert(9);

//  //Find send the iterator of element if that element exists
// //Finding 8
//  set<int>::iterator itr =s.find(8);

//   cout << "\nIterator position of given element element:\n"<<*itr<<endl;

//   cout<<"\nElements after the given iterator\n";
//   for(auto it=itr; it!=s.end(); it++){
//     cout<<*it<<" ";
//   }cout<<endl;


//   // Finding 9
//   cout<<"\nFind element 9  \n";
//     auto iti = s.find(9);
    
//     if (iti != s.end()) cout << *iti;
//     else cout << "Element not Found!";
// }






// --------------------------------------------------------------------------------------




// //Map

// #include<iostream>
// #include<map>

// using namespace std;

// int main(){

//     map<int, string>m;

//     m[1]="Miss";
//     m[7]="Gupta";
//     m[5]="Rashi";

//     m.insert({3, "Queen"});
//     m.insert({2, "Real"});

//     //Key
//     cout<<"\nKey: \n";

//     for(auto i : m){
//         cout<<i.first<<" "<<endl;
//     }

//     //Key-Value
//     cout<<"\nKey and value: \n";

//     for(auto i : m){
//         cout<<i.first<<" " <<i.second<<endl;
//     }

//     cout<<"\nFinding element 0 present or not\n"<<m.count(0)<<endl;                 //Return 0 for F
//     cout<<"\nFinding element 7 present or not\n"<<m.count(7)<<endl;                 //Return 1 for T

//     m.erase(2);
//     cout<<"\nAfter Erase\n"<<endl;           

//     for(auto i : m){
//         cout<<i.first<<" "<<endl;
//     }

//     //Finding element iterator

//     cout<<"\nFinding element iterator 5\n"<<endl;  

//     auto it=m.find(5);
//     for(auto i=it; i!=m.end(); i++){
//         cout<<(*i).first<<endl;
//      }


//     // Updating value
//     m[0] = "Tree";
//     m.at(1) = "Busy";
      

//     cout << m[0] << endl;
//     cout << m.at(1)<<endl;

//     cout<<"\nAfter updating values\n"<<endl;

//     for(auto i : m)
//         cout << i.first << " " << i.second<< endl;


//      // Deleting by iterator

//      cout<<"\nAfter erasing beginning element\n"<<endl;  

//     m.erase(m.begin());
    
//     for(auto i : m)
//         cout << i.first << " " << i.second<< endl;
// }




// --------------------------------------------------------------------------------------




// //STL Algorithms

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
vector<int>v;
v.push_back(1);
v.push_back(3);
v.push_back(4);
v.push_back(6);
v.push_back(7);
v.push_back(8);
v.push_back(10);

//Binary Search condition is elements need to be in sorted oreder.

cout<<"Finding element 6 : "<<binary_search(v.begin(),v.end(), 6)<<endl;
cout<<"Finding element 5 : "<<binary_search(v.begin(),v.end(), 5)<<endl;

//Needs sorted vector because it implements binary search to find the upper and lower bound value.
//It returns iterator

// They are binary search-based STL functions that work on sorted containers (vector, array, etc.) to find positions (iterators) efficiently in O(log n).

// ✅ lower_bound(start, end, value)
// The first element in the range which is not less than value (i.e., >= value).

// ✅ upper_bound(start, end, value)
// The first element in the range which is greater than value (i.e., > value).

cout<<"Upper Bound   "<<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;                    
cout<<"Lower Bound   "<<lower_bound(v.begin(),v.end(),9)-v.begin()<<endl;                   
cout<<"Lower Bound   "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl; 
cout<<"Upper Bound   "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;                   
cout<<"Lower Bound   "<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl; 

// 2️⃣ Why - v.begin() is used?
// upper_bound and lower_bound return iterators.

// To find the index position, you subtract:
// iterator - v.begin()
// giving you the index of the found element.

// Application of upper bound and lower bound

// 4️⃣ Using for counting occurrences of a value

cout<<"\nTo count how many times 7 occurs in v: \n";

int count = upper_bound(v.begin(), v.end(), 7) - lower_bound(v.begin(), v.end(), 7);
cout<<count<<endl;


// ❌ Why your usage is wrong
// cout<<"\nMaximum element :"<<max(v.begin(),v.end());                
// cout<<"\nMinimum element :"<<min(v.begin(),v.end());                 
// v.begin() and v.end() are iterators, not elements.

// ✅ Correct way to find maximum and minimum elements in a vector
// Use *max_element() and *min_element() from <algorithm>

// ✅ max_element(start, end) is an STL function from <algorithm>
// max_element returns an iterator, you need to dereference it to get the actual value at that location in memory.

//How does max_element and min_element work?

cout << "\nMaximum element: " << *max_element(v.begin(), v.end());
cout << "\nMinimum element: " << *min_element(v.begin(), v.end());

swap(*v.begin(), *(v.end()-1));                                                                       // Swap using iterators
cout << "\nAfter swap (using iterators), first: " << v[0] << ", last: " << v[v.size() - 1];

cout<<"\nSwapped v[0] and v[3]"<<endl;
swap(v[0], v[3]);                                                                                 //Swap two specific elements
cout << v[0] << " " << v[3]<<endl; 

int a = 5, b = 100;
cout <<"\nMaximum element: " << max(a, b); 
cout << "\nMinimum element: "<< min(a, b); 
swap(a, b);
cout << "\nSwap elements: a=" << a << ", b=" << b;

// we cannot write    cout<<swap(a,b)    , we can't print swap directly with cout because it does not return anything only make changes in the array or vector

vector<int> v1 = {1, 2};
vector<int> v2 = {3, 4};
swap(v1, v2);                                                        //  Swap entire vectors

cout << "\n\nAfter swap:\n";
    cout << "v1: ";
    for (int i : v1) cout << i << " ";
    cout << "\nv2: ";
    for (int i : v2) cout << i << " ";

//Reverse String

string s="abcd";
cout<<"\nString s : "<< s ;

reverse(s.begin(),s.end());

cout<<"\nReversed String s : "<< s <<endl;

//Rotate

cout<<"\nBefore rotate : ";
for(int i:v){
    cout<<i<<" ";
}

rotate(v.begin(),(v.begin()+2),v.end());

cout<<"\nAfter rotate : ";
for(int i:v){
    cout<<i<<" ";
}

sort(v.begin(),(v.begin()+3));                               //  ✅ Sort the elements in the range: (0, 1, 2 indices) of v
cout<<"\nSorting 3 elements: ";
for(int i:v){
    cout<<i<<" ";
}

sort(v.begin(),v.end());                               
cout<<"\nAfter sorting : ";
for(int i:v){
    cout<<i<<" ";
}


}
