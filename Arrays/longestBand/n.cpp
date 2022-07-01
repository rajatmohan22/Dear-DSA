// In this method, I will be using an array of booleans. We can also use a more efective datastructure.
///I MEAN IT DOES WORK BUT IT TAKES LOTT OF SPACE, and does not get accepted in leetcode.
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
#include <math.h>
using namespace std;

int longestBand(vector<int> &arr){
    int Max = *max_element(arr.begin(),arr.end());
    bool array[Max];/// This takes up a lot of space.
    memset(array,false,sizeof(array)); 

    for(int i=0;i<arr.size();i++){
        array[arr[i]]=true;
    }
    int longestSoFar=0,count=0;

    for(int i=0;i<=Max;i++){
        if(array[i]){
            count++;
        } else{
            longestSoFar = max(count,longestSoFar);
            count=0;
        }
    }
    return longestSoFar;

}

int main(){

    vector<int> v {1,9,3,0,18,5,2,4,10,7,12,6};
    longestBand(v);

}