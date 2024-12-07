// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

#include <iostream>
#include<vector>
using namespace std;
void reverse(vector<char>& v){
    int size=v.size();
    int i=0;
    int j=size-1;
    while(i<=j){
        char temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main() {
    int n;
    cout<<"enter size of an string:"<<endl;
    cin>>n;
    cout<<"enter string characters one by one:"<<endl;
    vector<char> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    reverse(str);
    cout<<"reverse array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<str[i];
    }
    
    return 0;
}