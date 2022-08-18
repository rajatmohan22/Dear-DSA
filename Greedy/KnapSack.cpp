#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<float> knapSack(vector<float> &profit, vector<float> &weight,int capacity){
    int size = profit.size();
    vector<float> PbyW,PbyW2,ans;
    map<float,int> map;

    if(profit.size()!=weight.size()) return {-1};

    for(int i=0;i<size;i++){
        PbyW.push_back(profit[i]/weight[i]);
        map[PbyW[i]]=i;
    }

    PbyW2=PbyW;
    sort(PbyW2.begin(),PbyW2.end(),greater<int>()); /// sort in descending order
    for(int i=0;i<size;i++) cout<<PbyW2[i]<<" "<<weight[map[PbyW2[i]]]<<endl;
    int capacity2 = capacity;
    int i=0;

    for(int i=0;i<size;i++){
        cout<<capacity2<<" - "<<weight[(map[PbyW2[i]])]<<" "<<PbyW2[i]<<endl;
        if(!capacity2) break;
        if(capacity2>weight[map[PbyW2[i]]]){
            capacity2-=(float)weight[(map[PbyW2[i]])];
            ans.push_back(1);
        } else{
            ans.push_back((float)(capacity2/weight[(map[PbyW2[i]])]));
            capacity2=0;
        }
    }

    // for(auto x: ans) cout<<x<<endl;
    return {};
}

int main(){

    vector<float> profit{10,5,15,7,6,18,3},weight{2,3,5,7,1,4,1},ans;
    knapSack(profit,weight,15);

    // for(auto x: ans){
    //     cout<<x<<endl;
    // }

    


}