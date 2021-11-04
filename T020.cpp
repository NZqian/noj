#include<iostream>
using namespace std;
int main(){
    int i, j, m[200]={0}, x=0, sum=0;
    for(i=500; i<=800; i++){
        for(j=2; j<i; j++){
            if(i%j!=0)continue;
            if(i%j==0)break;
        }
        if(i==j)m[x]=i, x++;
    }
    j=-1;
    //for(i=0; i<x; i++) cout<<m[i]<<ends;
    //cout<<'\n'<<'\n';
    for(i=0; i<x; i++){
        sum+=j*m[i];
        j=-j;
        //cout<<m[i]<<ends<<j<<ends<<sum<<endl;
    }
    cout<<x<<' '<<sum;
}