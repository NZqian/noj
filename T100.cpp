#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int s[200]={0}, ans[50]={0};
    int i=1, j=2, cnt=0, n, sum, cntnum=-1, ns=0, k=0;
    while(cnt<=199){
        for(j=2; j<i; j++){
            if(i%j==0&&i!=2)
                break;
        }
        if(i==j){
            s[cnt]=i;
            cnt++;
        }
        i++;
    }
    //for(i=0; i<50; i++)
        //cout<<s[i]<<endl
	cnt=0;
    while(1){
        cin>>n;
        if(n==0)break;
        sum=0;
        cntnum=0;
        i=0;
        j=0;
		while(1){
			if(s[i]>n)break;
			sum+=s[i+cntnum];
			if(sum==n){
				j++;
				i++;
				k++;
				cntnum=0;
				sum=0;
				continue;
			}
			else if(sum>n){
				i++;
				cntnum=0;
				sum=0;
				continue;
			}
			cntnum++;
		}
		ans[ns]=j;
		ns++;
    }
    for(i=0; i<ns; i++)
        cout<<ans[i]<<endl;

}