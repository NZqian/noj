#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, i=1, j, k, cnt=0;
    cin>>n;
    while(cnt<n){
        for(j=i*100+1; j<=(i+1)*100-2; j=j+2){
            for(k=3; k<j; k++){
                if(j%k==0){
                    //cout<<j<<endl;
                    break;
                }
                if(k>sqrt(j))break;
            }
            if(j==k)
                break;
            if(k>sqrt(j))break;
        }
        //cout<<'\n';
        //cout<<j<<endl;
        if(j==(i+1)*100-1){
            //cout<<i*100<<' '<<(i+1)*100-1<<endl;
            cnt++;
        }
        i++;
    }
    i--;
    cout<<i*100<<' '<<(i+1)*100-1<<endl;
}
