#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
#include <math.h>
using namespace std;

//// 1 2 3 6 9 8 6 1 4 5 6 1 2 3 6
/// 1 3 2

int LongestMountain(vector<int> &v){
    
    int largestSoFar=0;
    for(int i=1;i<v.size()-1;){
        int count=1;
        int j=i;
        if(v[i]>v[i+1]&&v[i]>v[i-1]){
            while(j>=0&&(v[j]>v[j-1])){
                count++;
                j--;
        }
            while(v[i]>v[i+1]){
                count++;
                i++;
            }
        largestSoFar = max(count,largestSoFar);
        }
        else i++;
    }
    return largestSoFar;
}

int main(){
    vector<int> v{2,1,4,7,3,2,5};
    cout<<LongestMountain(v);

}
