#include <iostream>
#include<vector>
using namespace std;
void helper(vector<int>& nums,vector<int> ans,vector<vector<int>>& finalans,int idx){
    if(idx==nums.size()){
        finalans.push_back(ans);
        return;
    }
    helper(nums,ans,finalans,idx+1);
    ans.push_back(nums[idx]);
    helper(nums,ans,finalans,idx+1);

}
vector<vector<int>> subset(vector<int>& nums){
    vector<int> ans;
    vector<vector<int>> finalans;
    helper(nums,ans,finalans,0);
    return finalans;

}
int main() {
    int size;
    cout<<"enter size of an array:"<<endl;
    cin>>size;
    vector<int> v(size);
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    vector<vector<int>> res=subset(v);
    cout<<"subsets are:"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<"{";
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"}";
        
        
    }
    
    
    return 0;
}