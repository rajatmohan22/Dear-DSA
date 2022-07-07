#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define MAX 1000

char* URLify(char* str){
    int spaces=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' ') spaces++;
    }
    
    int idx=strlen(str)+2*spaces;
    str[idx--]='\0';
    
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]==' '){
            str[idx]='%';
            str[idx-1]='0';
            str[idx-2]='2';
            idx-=3;
        } else{
            str[idx--]=tolower(str[i]);
        }
    }
    
    
}



int main()
{
    char str[MAX] = "Hello world how are we doing today";
    cout<<URLify(str);
    
}