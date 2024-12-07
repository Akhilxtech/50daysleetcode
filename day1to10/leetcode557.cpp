#include <iostream>
#include<algorithm>
using namespace std;
string reversewords(string s){
    int left=0;
    int right=0;
    while(left<s.length()){
        while(s[right]!=' '&& right<s.length()){
            right++;
        }
        reverse(s.begin()+left,s.begin()+right);
        left=right+1;
        right=left;
    }
    return s;
}
int main() {
    string str;
    cout<<"enter string:"<<endl;
    getline(cin,str);
    string result=reversewords(str);
    cout<<"the reversed string is: "<<endl<<result;

    
    return 0;
}