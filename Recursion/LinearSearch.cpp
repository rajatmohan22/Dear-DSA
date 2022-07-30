#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int found=0;

int LinearSearch(vector<int> &v, int n, int key){
    if(n>=0){
        if(LinearSearch(v,n-1,key)==key) found=1;
        return v[n];
    }
}

int main(){
    
    vector<int> v{4,5,1,2,10,12,13};
    LinearSearch(v,v.size(),19);
    cout<<found<<endl;
}