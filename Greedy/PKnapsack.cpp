#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

float PartialKnapSack(vector<float> Profit,vector<float> Weight,int capacity){

    if(Profit.size()!=Weight.size()) return 0;
    int n=Profit.size();

    vector<pair<float,int>> PbyW;

    for(int i=0;i<n;i++){
        PbyW.push_back(make_pair((Profit[i]/Weight[i]),i));
    }

    sort(PbyW.begin(),PbyW.end());

    for(int i=0;i<PbyW.size();i++){
        cout<<PbyW[i].first<<" "<<PbyW[i].second<<endl;
    }

    double ans[n];

    for(int i=0;i<PbyW.size();i++){
        ans[i]=0;
    }

    double profit=0;

    for(int i=PbyW.size()-1;i>=0;i--){
        cout<<"capacity: "<<capacity<<endl;
        if(capacity==0) break;
        if(capacity<Weight[PbyW[i].second]){
            ans[i]=capacity/Weight[PbyW[i].second];
            profit+=(capacity/Weight[PbyW[i].second])*Profit[i];
            capacity=0;
        } else{
            ans[i]=1;
            profit+=(Profit[i]*Weight[i]);
            capacity-=Weight[PbyW[i].second];
        }
    }

    for(int i=0;i<PbyW.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"Maximum profit: "<<profit<<endl;


 
}

int main(){
    PartialKnapSack({10,5,15,7,6,18,3},{2,3,5,7,1,4,1},15);
}