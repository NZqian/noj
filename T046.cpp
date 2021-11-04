#include<iostream>
using namespace std;
int main(){
    int a[100], b[100],i,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        b[i]=a[i];
    for(i=1;i<n;i+=2)
        cout<<b[i]<<' ';
}