#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> permute(string str,vector<int> &freq,string &ds,vector<string> &ans){

    if(ds.length()==str.length()){
        ans.push_back(ds);
    }

    for(int i=0;i<str.length();i++){
        if(!freq[i]){
            freq[i]=1;
            ds+=str[i];
            permute(str,freq,ds,ans);
            freq[i]=0;
            ds.pop_back();
        }
    }

    return ans;
}


int main(){

    string str = "hello";
    vector<int> freq(str.size(),0);
    vector<string> ans;
    string ds="";
    permute(str,freq,ds,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}