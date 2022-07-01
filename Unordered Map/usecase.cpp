/// Just a use case scenario to demonstrate the use of unordered map and few of its built in methods.

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;

int main(){

    unordered_map<char,int> M;
    
    string str="Rajat";

    for(int i=0;str[i];i++){
        if(M.find(str[i])==M.end()){
            M.insert(make_pair(str[i],1));
        }

        else{
            M[str[i]]++;
        }
        
    }

    for (auto it : M) {
        cout << it.first << ' ' << it.second <<endl;
    }
    

    return 0;
}