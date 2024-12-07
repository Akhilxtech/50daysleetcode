// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
// method 1
// string longest(vector<string>& str){
//     int size=str.size();
//     sort(str.begin(),str.end());
//     string first=str[0];
//     string last=str[size-1];
//     string s="";
//     for(int i=0;i<min(first.length(),last.length());i++){
//         if(first[i]==last[i]){
//             s+=first[i];
//         }
//         else{
//             break;
//         }
//     }
//     return s;

// }
// method 2
string longest(vector<string>& str){
   if(str.empty()) return "";
   string prefix=str[0];
   for(int i=0;i<str.size();i++){
    while(str[i].find(prefix)!=0){
        prefix=prefix.substr(0,prefix.size()-1);
        if(prefix.empty()) return "";
    }
   }
   return prefix;
}


int main(){
    int n;
    cout<<"enter size of an array:"<<endl;
    cin>>n;
    vector<string> v(n);
    cout<<"enter string:"<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"the longest common prefix is:"<<longest(v);
    
    return 0;
}