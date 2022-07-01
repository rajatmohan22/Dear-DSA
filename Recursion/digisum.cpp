#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;

int digisum(int n){
    //// 678
    if(n>0){
        return digisum(n/10)+n%10;
    } return 0;
}

int main(){
    cout<<digisum(10);
}