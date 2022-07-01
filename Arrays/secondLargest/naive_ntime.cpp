////this does 2 traversals. i.e O(n+n)=O(2n) = O(n) time. This is pretty good, but can still be bettered.
///Algorithm is:
/// first we find the largest element, then we again find the largest element of the array leaving that largest element.
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;


int Largest(vector<int> &v){ 

    int max=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}

int secondLargest(vector<int> &v){
    int largest = Largest(v);

    int max=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]!=largest){
            if(v[i]>max){
                max=v[i];
            }
        }
    }

    return  max;

}


int32_t main(){
    vector<int> v{3,4,5,1,2,10};
    cout<<secondLargest(v); 
}