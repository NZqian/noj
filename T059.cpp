#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char a[1000];int u = 0, d=0, s=0;int i;
    gets(a);
    for(i = 0; i < strlen(a); i++){
        if(a[i]==85) u = u + 1;
        if(a[i]==68) d = d + 1;
        if(a[i]==83) s = s + 1;
    }
    if(s>0) cout<<"WA";
    else {
        if (u==d) cout<<'1'<<'/'<<'2';
        else cout<<"Fail";
    }
}