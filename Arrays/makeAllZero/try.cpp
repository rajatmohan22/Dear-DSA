#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
	
	int T;cin>>T;
	while(T--){
	    map<int,int> m1;
	    
	    int N;cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++){ 
	        cin>>A[i];
	        m1[A[i]]=A[i];
	    }
	    int n=sizeof(A)/sizeof(A[0]);
	    sort(A,A+n);
	    int low=0,high=n-1;
	    
	   // int counter=0;
	   // while(low<=high){
	   //     if(m1[A[high]-A[low]+1]){
	   //         counter++;
	   //     }
	   //     low++;high--;
	   // }
	   // cout<<counter<<endl;
	   
	   map<int,int>::iterator itr;
	   
	   for(auto itr=m1.begin();itr!=m1.end();itr++){
	        cout<<itr->first<<" "<<itr->second<<endl;
	       
	   }
	    
	    
	    
	    
	    
	}
}
