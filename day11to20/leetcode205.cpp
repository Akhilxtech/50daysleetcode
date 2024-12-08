#include<iostream>
#include<vector>
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> s1(150,-1);
        vector<int> t1(150,-1);

        bool isomorphic=true;
        if(s.length()!=t.length()) isomorphic=false;
        
        for(int i=0;i<s.length();i++){
            int idxs=int(s[i]);
            int idxt=int(t[i]);
            if(s1[idxs]==-1&&t1[idxt]==-1){
                s1[idxs]=idxt;
                t1[idxt]=idxs;
            }
            else if(s1[idxs]!=idxt||t1[idxt]!=idxs){
                isomorphic=false;
                break;
            }
        }
        return isomorphic;
    }
};