/// Best case solution for the problem. O(n): using hash map.
/// Here also we need to consider the array elements as a input stream of data.
//// The logic behind this problem is EXTREMELY IMPORTANT.

#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <vector>
#include <iterator>
#define ll long long;
using namespace std;

int subArray(vector<int> &v,int sum){
    //// Original array: 1 2 3 4 5 6. required sum=9.
    //// Consider at some given point of time,
    //// 1 2 3 4 5...(6 is yet to come). total=15,total-sum=6.
    //// 1: 1
    //// 2: 3
    //// 3: 6
    //// 4: 10
    ///  5: 15
    ///LATER:
    ///  6: 21

    map<int,int> Map;
    map<int,int>:: iterator itr;

    int totalSum=0;
    for(int i=0;i<v.size();i++){
        totalSum+=v[i];
        Map[i] = totalSum; /// record summation of array elements upto ith index.

        if(totalSum-sum==0){
            cout<<0<<" "<<i;
        } else if(Map.count(totalSum-sum)>0){ //// i.e, if we have that element in values pair.
            itr = Map.find(totalSum-sum);
            cout<<itr->first<<" "<<i; 
        }
    }
}

int32_t main(){
    vector<int> v{1,2,3,4,5,6};
    subArray(v,9);
}