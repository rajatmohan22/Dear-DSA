//// Brute force solution with O(n^2) time complexity

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;

int subArray(vector<int> &v,int sum){
    //// 1 2 3 4 5 6.
    for(int i=0;i<v.size();i++){
        int totSum=0;
        for(int j=i;j<v.size();j++)
        {
            totSum+=v[j];
            if(totSum==sum){
                cout<<i<<" "<<j<<endl;
                return 1;
            }
        }  
    }

    return 0;
}


int32_t main(){

    vector<int> v{1,2,3,4,5,6};
    cout<<subArray(v,15);

}