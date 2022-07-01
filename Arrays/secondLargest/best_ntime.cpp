
//// O(n), here we will perform only one traversal in the array.
///Algorithm:

//// consider the array to be an input stream of data. Every element that comes in [into the loop]..will be
/// checked with some creds to see if it is larger than the preset value of largest or not.

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;

int secondLargest(vector<int> &v){

    int largest=0,sLargest=0;
    for(int i=0;i<v.size();i++){
        if((v[i]>=largest)){
            largest=v[i];
        }

        else if(v[i]>=sLargest&&sLargest!=largest){
            sLargest=v[i];
        }
        cout<<largest<<" "<<sLargest<<endl;
    }

    return sLargest;
}

int32_t main(){
    vector<int> v{12,7,10,9};
    cout<<secondLargest(v); 
}