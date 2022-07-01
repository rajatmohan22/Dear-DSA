// In this method, I will be using an array of booleans. We can also use a more efective datastructure.
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
#include <math.h>
using namespace std;


int longestBand(vector<int> &arr){
    unordered_set<int> set;
    int largestSoFar = 0;
    for(int i=0;i<arr.size();i++){
        set.insert(arr[i]); ///First insert all the elements into a set. Insertion into the set takes constant time.
    }
    
    for(int i=0;i<arr.size();){
        int count=1;
        if(set.find(arr[i]-1)!=set.end()){ // if the consq smallest element is found.
            i++;
        } else{
            int j=i;
            while(set.find(arr[j]+1)!=set.end()){
                count++;
                arr[j]++;
            }   
            i++;
            largestSoFar=max(count,largestSoFar);
        }
    }
    return largestSoFar;
  
    
}

int main(){

    vector<int> v {}; ///01234567, ans=8
    cout<<longestBand(v);

}

///// 1010101111001111
//////