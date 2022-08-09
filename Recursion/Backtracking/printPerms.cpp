#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printPerms(vector<int> ques,vector<vector<int>> &ans,vector<int> &ds, int freq[]){

    if(ds.size()==ques.size()){
        ans.push_back(ds);
        return;
    }

    for(int i=0;i<ques.size();i++){
        if(!freq[i]){
            freq[i]=1;
            ds.push_back(ques[i]);
            printPerms(ques,ans,ds,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }

}

int main(){

    vector<vector<int>> ans;
    vector<int> ques{1,2,3,4,5,6};
    vector<int> ds;
    int freq[ques.size()];
    for(int i=0;i<ques.size();i++) freq[i]=0;
    printPerms(ques,ans,ds,freq);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}