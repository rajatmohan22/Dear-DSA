#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;

void digits(int n){

    if(n>0){
        digits(n/10);
        cout<<" "<<n%10;
    }

}


int main(){
    digits(678);
}