#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
#include <math.h>
using namespace std;

vector<int> twoPointer(vector<int> &v,int start,int end,int target){
    int low=start,high = end;
    vector<int> ans;
    do{
        if(v[low]+v[high]==target){
            ans.push_back(v[low]);
            ans.push_back(v[high]);
            return ans;
        } else if(v[low]+v[high]<target){
            low++;
        } else {
            high--;
        }
    } while(low<high);
    
    return {};
}

vector<vector<int>> Triplet(vector<int> &v,int target){
    vector<vector<int>> ans;
    for(int i=0;i<v.size();i++){ ////n
        vector<int> res = twoPointer(v,i+1,v.size()-1,target-v[i]); ///nlogn
        if(res.size()){
            if(res[0]+res[1]+v[i]==target){
                cout<<res[0]<<" "<<res[1]<<" "<<v[i]<<endl;
                ans.push_back(res);
            }
        }
    }
    return ans;
}

int main(){
    vector<int> v{1,2,3,4,6,8,9};
    vector<vector<int>> ans;
    ans=Triplet(v,12); /// This works. Only thing is, idk how to print the resulting vector of vectors so i have couted it in the fn only.
    if(!ans.size()){
        cout<<null;
    }
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans.size();j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}