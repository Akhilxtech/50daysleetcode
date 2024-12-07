// You are given a string num consisting of only digits. A string of digits is called balanced if the sum of the digits at even indices is equal to the sum of digits at odd indices.

// Return true if num is balanced, otherwise return false.

 

// Example 1:

// Input: num = "1234"

// Output: false

// Explanation:

// The sum of digits at even indices is 1 + 3 == 4, and the sum of digits at odd indices is 2 + 4 == 6.
// Since 4 is not equal to 6, num is not balanced.
// Example 2:

// Input: num = "24123"

// Output: true

// Explanation:

// The sum of digits at even indices is 2 + 1 + 3 == 6, and the sum of digits at odd indices is 4 + 2 == 6.
// Since both are equal the num is balanced.

#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
// method 1
// bool isbalnced(string str){
//     int x=stoi(str);
//     int ld, sumeven=0,sumodd=0;
//     vector<int> v;
//     while(x>0){
//         ld=x%10;
//         v.push_back(ld);
//         x/=10;
//     }
//     for(int i=0;i<v.size();i++){
//         if(i%2==0){
//             sumeven+=v[i];
//         }
//         else{
//             sumodd+=v[i];
//         }
//     }
//     return sumeven==sumodd;
// }
//method 2
bool isbalnced(string str){
    
    int sumeven=0,sumodd=0;
    
    for(int i=0;i<str.size();i++){
        int v=str[i]-'0';
        if(i%2==0){
            sumeven+=v;
        }
        else{
            sumodd+=v;
        }
    }
    return sumeven==sumodd;
}
int main() {
    string s;
    cout<<"enter string:"<<endl;
    getline(cin,s);
    cout<<isbalnced(s);
    
    
    return 0;
}