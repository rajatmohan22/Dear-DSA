#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;

void printNos(int n){
    if(n>=1){
        printNos(n-1);
        cout<<n;
    }
    
}


int main(){
    printNos(5);
}