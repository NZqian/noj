#include<iostream>
using namespace std;
int main(){
    int a1=1, a2=1, ax=0, s=0, n=2;
    s=s+a1+a2;
    do{
        ax=a1+2*a2;
        a1=a2; a2=ax;
        s+=ax;
        n++;
    }while(s<100);
    cout<<n-1<<endl;
    do{
        ax=a1+2*a2;
        a1=a2; a2=ax;
        s+=ax;
        n++;
    }while(s<1000);
    cout<<n-1<<endl;
    do{
        ax=a1+2*a2;
        a1=a2; a2=ax;
        s+=ax;
        n++;
    }while(s<10000);
    cout<<n-1;
}