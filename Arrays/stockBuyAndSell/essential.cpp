/// Only the function is given here.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        
        int n=prices.size();

        //// 5 1 7 3 6 4
        
            int min=INT_MAX,profit=0;
            for(int i=0;i<n;i++){
                if(prices[i]<min){
                    min=prices[i];  
                } if(prices[i]-min>profit){
                    profit=prices[i]-min;
                }
            }
        
            return profit;
            
            
              
    }