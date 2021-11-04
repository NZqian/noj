#include<iostream>
using namespace std;
int main(){
    int m[5], ans[5];
    int i, q, p;
    for(i=0; i<5; i++) cin>>m[i];
    if((m[0]+m[1]==m[2])&&(m[1]+m[2]==m[3])&&(m[2]+m[3]==m[4])){
        ans[0]=m[3]+m[4];
        ans[1]=m[4]+ans[0];
        ans[2]=ans[0]+ans[1];
        ans[3]=ans[1]+ans[2];
        ans[4]=ans[2]+ans[3];
    }
    else if((m[0]*m[2]==m[1]*m[1])&&(m[2]*m[4]==m[3]*m[3])){
        q=m[2]/m[1];
        ans[0]=m[4]*q;
        for(i=1; i<5; i++) ans[i]=ans[i-1]*q;
    }
    else if((m[0]+m[2]==2*m[1])&&(m[2]+m[4]==2*m[3])){
        p=m[2]-m[1];
        ans[0]=m[4]+p;
        for(i=1; i<5; i++) ans[i]=ans[i-1]+p;
    }
    else {
        cout<<NULL;
        return 0;
    }
    for(i=0; i<4; i++)cout<<ans[i]<<' ';
    cout<<ans[i];
}