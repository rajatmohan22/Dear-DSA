///O(nlogn) time and this the worst solution!!!
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;


int secondLargest(vector<int> &v){ 

    sort(v.begin(),v.end());

    return v[1];
}


int32_t main(){
    vector<int> v{12,7,10,9};
    cout<<secondLargest(v);  
}