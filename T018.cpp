#include<iostream>
using namespace std;
int main(){
    int x, a, i;
    int ans=1;
    cin>>x>>a;
    for(i=1; i<=a; i++){
        ans*=x;
        if(ans>=1000)ans=ans%1000;
    }
    cout<<ans;
}
