#include<iostream>
using namespace std;
int main(){
    int a[100], b[100], c[100], n, i;
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i];
    for(i=0; i<n; i++) cin>>b[i];
    for(i=0; i<n; i++) c[i]=a[i]+b[i];
    for(i=0; i<n; i++) cout<<c[i]<<' ';
}