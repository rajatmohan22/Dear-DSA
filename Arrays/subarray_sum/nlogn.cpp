//// A slightly better solution.

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;

int subArray(vector<int> &v,int sum){
    //// 1 2 3 4 5 6.
        int low=-1,high=-1;

        int totalSum=0;
        do{  
            if(totalSum<sum){
                high++;                     
                totalSum+=v[high];
            } else if(totalSum>sum){
                low++;
                totalSum-=v[low];
            } else if(totalSum==sum){
                cout<<low+1<<" "<<high<<endl;
                return 1;
            }
        }while(low!=high);

        return 0;


}

int32_t main(){

    vector<int> v{1,2,3,4,5,6};
    subArray(v,9);
    return 0;
}