#include <iostream>
#include <bits/stdc++.h>
using namespace std;


unordered_map<int,int> m;
int Fibo(int n){
    if(n<=1){
        return n; /// constant time.
    }
    
    else{
        if(!m[n-1]){
            m[n-1]=Fibo(n-1);
        } 
        
        if(!m[n-2]){
            m[n-2]=Fibo(n-2);
        }

        return m[n-1]+m[n-2];
    }
    
}

int main(){
    unordered_map<int,int> m;
    cout<<Fibo(12);

}