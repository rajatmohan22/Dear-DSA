/// Use case scenario of an unordered_map for counting the frequency of each element in an array.
/// type: int->int

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int> map;
    vector<int> v{1,2,3,4,4,5,9,10,2,3};
    
    for(int i=0;i<v.size();i++){
        
        map[v[i]]++;
    }
    
    unordered_map<int,int>::iterator itr;
    
    for(itr=map.begin();itr!=map.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    return 0;
}