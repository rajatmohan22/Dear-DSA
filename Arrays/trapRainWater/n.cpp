#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
#include <math.h>
using namespace std;

int trap(vector<int>& arr) {
        vector<int> Lmax;
        vector<int> Rmax;
        
        int max=0;
        for(int i=0;i<arr.size();i++){ 
            if(arr[i]>max){
                max=arr[i];
            }
            Lmax.push_back(max);
        }
        max=0;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>max){
                max=arr[i];
            }
            Rmax.push_back(max);
        }

        for(int i=0;i<arr.size();i++){
            cout<<Lmax[i]<<" "<<Rmax[i]<<endl;
        }
        
        int ans=0;
        for(int i=0,j=arr.size()-1;i<arr.size();i++,j--){
            ans=ans+min(Lmax[i],Rmax[j])-arr[i];
        }
        return ans;
        
    }

    int main(){
        vector<int> v{0,1,0,2,1,0,1,3,2,1,2,1};
        cout<<trap(v);
    }