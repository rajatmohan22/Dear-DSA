// int string::compare (const string& str) const
// Returns:
// 0 : if both strings are equal.
// A value < 0 : if *this is shorter than str or,
// first character that doesn't match is smaller than str.
// A value > 0 : if *this is longer than str or,
// first character that doesn't match is greater

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#define ll long long;
using namespace std;

int32_t main(){

    string s;
    cout<<"Give: ";
    cin>>s;

    int len=0,i=0;
    while(s[i]!='\0'){
        len++;i++;
    }

    string rev="";
    for(int i=len-1;i>=0;i--){
        rev+=s[i];
    }

    if(s.compare(rev)==0){
        cout<<"Palindrome";
    } else {
        cout<<"Not Palindrome";
    }
    
return 0;
}