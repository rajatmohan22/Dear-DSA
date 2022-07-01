#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
#include <math.h>
using namespace std;


int length(vector<int> & arr){
        int n=arr.size();
        if(n==0||n==1) return 0;
        int count=0,l,r;
        
        for(int i=1;i<n-1;i++){
            if(!(arr[i]>arr[i-1]&&arr[i]<arr[i+1])){
                l=arr[i];
                break;
            }

        }

        for(int i=n-2;i>=0;i--){
            if(!(arr[i]>arr[i-1]&&arr[i]<arr[i+1])){
                r=arr[i];
                break;
            }
        }
        r=min(r,l);
        l= max(l,r);
        
}

int main(){
    vector<int> v{1,2,3,4,5,8,6,7,9,10,11};
    cout<<length(v);
}