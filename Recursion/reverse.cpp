#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;

int reverse(int n){
    ////// 45678
    static int res=0;
    if(n==0) return 0;

    if(n>0){
        int temp=n%10;
        res=(res*10)+temp;

        reverse(n/10);
    } return res;


}

int main(){
    cout<<reverse(456);
}