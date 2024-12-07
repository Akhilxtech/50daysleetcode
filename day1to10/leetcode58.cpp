// Given a string s consisting of words and spaces, return the length of the last word in the string.

// A word is a maximal 
// substring
//  consisting of non-space characters only.

 

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.
// Example 3:

// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.
#include <iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main() {
    string str;
    cout<<"enter any string"<<endl;
    getline(cin,str);
    stringstream s(str);
    string temp;
    vector<string> v;
    while(s>>temp){
        v.push_back(temp);
    }
    string lastword;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[v.size()-1]){
            lastword=v[i];
        }
    }
    int result=lastword.length();
    cout<<"length of last word is:"<<result;
    return 0;
}