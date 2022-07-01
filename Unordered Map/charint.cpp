/// unordered map is used to count the frequency of each character in a sring.
/// type: char->int

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<char,int> map;
    string s="Rajat";
    
    int i=0;
    while(s[i]!='\0'){
        map[s[i]]++;
        i++;
    }
    unordered_map<char,int>::iterator itr;
    
    for(itr=map.begin();itr!=map.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    return 0;
}