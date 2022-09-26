#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
#define M 8
using namespace std;

int MAX(int a,int b){
    if(a>=b) return a;
    return b;
}



int makeTable(vector<int> profit,vector<int> weight,int n,int m){

    if(profit.size()!=weight.size()) return {};
    ///now that we are sure profit and weight have the same size, we can move forward.
    int Table[n+1][m+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0) Table[i][j]=0;
            else{
                if(j>=weight[i]){
                    Table[i][j]=MAX(Table[i-1][j],(Table[i-1][j-weight[i]]+profit[i]));
                } else{
                    Table[i][j]=Table[i-1][j];
                }

            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<Table[i][j]<<"-";
        }
        cout<<endl;
    }

    // return Table[n][m];

    int i=n,j=m,now=Table[n][m];
    vector<int> ans;
    while(i>0){
        if(Table[i][j]==Table[i-1][j]){
            ans.push_back(0);
            i--;
        } else {
            ans.push_back(1);
            j-=weight[i]; 
            i--;
        }

    }

    for(int i=0;i<=n;i++){
        cout<<ans[i];
    }
}

int main(){

    vector<int> Profit{0,1,2,5,6};
    vector<int> Weight{0,2,3,4,5};

    cout<<(makeTable(Profit,Weight,4,8));
    return 0;
}