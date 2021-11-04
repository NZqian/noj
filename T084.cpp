#include<iostream>
using namespace std;
int main(){
    int a, b, i, n, s, smax=0;
    cin>>a>>b;
    for(i=a; i<=b; i++){
        n=i;
        s=0;
        L1: s++;
        if(n==1) goto L2;
        if(n&2!=0)n=3*n+1;
        else n=n/2;
        goto L1;
        L2:if(s>smax)smax=s;
    }
    cout<<a<<' '<<b<<' '<<smax;
}