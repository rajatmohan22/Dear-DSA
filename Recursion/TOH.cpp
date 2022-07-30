#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void TOH(int n,int A,int B,int C){

    if(n>0){
        TOH(n-1,A,C,B);
        if(n-1>0) cout<<"Move "<< n-1 <<" disc from "<<A<<" to "<<C<<" using "<<C<<endl;
        TOH(n-1,B,A,C);
    }
    
}

int main(){
    TOH(3,1,2,3);
}