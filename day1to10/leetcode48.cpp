// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

// Example 1:


// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]
// Example 2:


// Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
// Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

#include <iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& matrix){
    int size=matrix.size();
    // doing transpose
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // rotating matrix at 90
    for(int k=0;k<size;k++){
        int i=0;
        int j=size-1;
        while(i<j){
            swap(matrix[k][i],matrix[k][j]);
            i++;
            j--;
        }
    }
}
int main() {
    int x;
    cout<<"enter the size of rows or coloumn"<<endl;
    cin>>x;
    vector<vector<int>> b(x,vector<int>(x));
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cin>>b[i][j];
        }
    }
    cout<<"original matrix:"<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"matrix after rotating 90 degree:"<<endl;
    rotate(b);
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}