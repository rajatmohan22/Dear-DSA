#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float ncr(float n,float r){

    if(n>0){
        if(r<=1) r=1;
        return ncr(n-1,r-1)*(n/r);

    } return 1;

}

int main(){
    cout<<ncr(5,2);
}

