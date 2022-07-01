///few Assumption made:
////1. No Duplicates.
///There is a very important reason why we dont add all elements into the map first only and then search lmao.
///It is important to undertand that.

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
#include <math.h>
using namespace std;

vector<int> twoSum(vector<int> &v ,int target){
    
    unordered_set<int> map;
    unordered_set<int> ::iterator it;
    vector<int> answer;
    for(int i=0;i<v.size();i++){
        it = map.find(target-v[i]);
        if(it==map.end()){
            map.insert(v[i]);
            continue;
        } else{
            answer.push_back(v[i]);
            answer.push_back(target-v[i]);
            return answer;
        }
    return {};
    }
}

int main(){
    vector<int> v{10,5,2,3,-6,9,11};
    vector<int> idk = twoSum(v,4);
    for(int i=0;i<idk.size();i++){
        cout<<idk[i]<<" ";
    }
}