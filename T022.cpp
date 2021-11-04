#include<iostream>
using namespace std;
int main(){
    int a, b, n=2, n1=0, n2, n3;
    double sum=1, s=1;
    bool flag=true;
    cin>>a>>b;
    do{
        s+=1.0/n;
        sum+=1.0/s;
        if(sum>=a&&flag==true) n1=n, flag=false;
        n++;
    }while(sum<=b);
    n2=n-2;
    if(n1==n2)cout<<n1;
    else cout<<n1<<' '<<n2;
}