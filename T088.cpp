#include<iostream>
using namespace std;
void swapsort(int a[], int n){
    int i, k;
    for(i=0; i<n-1; i++){
        for(k=0; k<n-i-1; k++){
            if(a[k]>a[k+1]) swap(a[k], a[k+1]);
        }
    }
}
int main(){
    int n, i, a[100]={0}, b[100]={0}, scoa=0, scob=0;
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i];
    for(i=0; i<n; i++) cin>>b[i];
    swapsort(a, n);
    swapsort(b, n);
    for(i=0; i<n; i++) {
        if(a[i]>b[i])scoa++;
        else if(a[i]<b[i])scob++;
    }
    if(scoa>scob)cout<<'A';
    else if(scoa<scob)cout<<'B';
    else cout<<'=';
}