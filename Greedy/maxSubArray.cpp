#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxSumSub(vector<int> v){
    int maxSum=0;
    int curSum=0;

    for(int i=0;i<v.size();i++){
        curSum+=v[i];
        if(curSum<0) curSum=0;

        if(maxSum<curSum) maxSum=curSum;
    }
    return maxSum;
}

int main(){
    cout<<maxSumSub({-2,1,-3,4,-1,2,1,-5});
}