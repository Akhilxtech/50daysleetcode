// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

// Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.

// The test cases are generated so that the answer will be less than or equal to 2 * 109.

 

// Example 1:


// Input: m = 3, n = 7
// Output: 28
// Example 2:

// Input: m = 3, n = 2
// Output: 3
// Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
// 1. Right -> Down -> Down
// 2. Down -> Down -> Right
// 3. Down -> Right -> Down

#include <iostream>
using namespace std;
int maze(int m,int n){
    if(m<1||n<1) return 0;
    if(m==1&&n==1) return 1;
    int rightways=maze(m,n-1);
    int downways=maze(m-1,n);
    return rightways+downways;
}
int main() {
    int start,end;
    cout<<"enter starting row:"<<endl;
    cin>>start;
    cout<<"enter ending coloumn:"<<endl;
    cin>>end;
    cout<<"there are total "<<maze(start,end)<<" ways to reach destination";
    
    return 0;
}
// above solution is right but gives time limit exceed to solve that problem we use dp 