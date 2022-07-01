
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <math.h>
#define ll long long;
using namespace std;

void sieveofE(int M,int N){
    bool prime[N+1];
    memset(prime,true,sizeof(prime));
    if(M<=2) M=2;

    for(int i=2;i<=N;i++){
        if(prime[i]){
            for(int j=i*i;j<=N;j+=i){
                prime[j]=false;

            }
        }
    }

    for(int i=M;i<=N;i++){
        if(prime[i]){
            cout<<i<<endl;
    }
}

}

int main(){
    sieveofE(7,50);
}