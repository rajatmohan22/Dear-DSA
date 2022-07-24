#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool isSub(string main, string sub){

    int i=0,j=0,count=0,ii;

    while(main[i]!='\0'){
        while(main[i]==sub[j]){
            ii=i;
            if(count==0) ii=i;
            i++;
            j++;
            if(sub[j]=='\0') return true;
            count++;
        }
        // i=ii;
        count=0;
        j=0;
        i++;
    }
    return false;
}


int main(){
    cout<<isSub("rajatmohan","atm")<<endl;


}