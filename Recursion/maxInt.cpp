#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxInt(vector<int> &v,int n){
    if(n>0){
        return maxInt(v,n-1)>v[n]?maxInt(v,n-1):v[n];
    }
    else return v[n];
}

int main(){
    
    vector<int> v{5,4,3,9,10,78};
    cout<<maxInt(v,v.size()-1);
}