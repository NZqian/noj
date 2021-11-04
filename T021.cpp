#include<iostream>
using namespace std;
int main(){
    int n, i;
    cin>>n;
    for(i=1; i<n; i++){
        if((i%7==0)||(i%10==7)||(i/10%10==7)||(i/100%10==7)||(i/1000%10==7)||(i/10000%10==7))
            cout<<i<<' ';
    }
}