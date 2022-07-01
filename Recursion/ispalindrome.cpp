//// It is not very efficient (Acc to me, not at all effecient) to reverse and compare.
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;

bool isPalindrome(string str,int start,int end){

    if(start>=end) return true;
    return (str[start]==str[end]) && isPalindrome(str,start+1,end-1);

}


int main(){
    string str = "levels";
    int end = str.length();
    int start = 0;
    cout<<isPalindrome(str,start,end-1);
}