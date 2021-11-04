#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    string a, b; int m[100]={0}, n[100]={0}, ans[200]={0}, *p, *q, i, j, len1, len2, lenp, lenq; bool flagexc, flagans, flag1=true, flag2=true;
    cin>>a;cin>>b;
    len1 = a.length(); len2 = b.length();
    if(a[0]=='-'){
        flag1 = false;
        for (i = len1-1, j = 0; i > 0; i--, j++) m[j] = a[i] - 48;
        len1--;
    }
    else {
        for(i=len1-1, j=0; i>=0; i--, j++)m[i]=a[i]-48;
    }
    if(b[0]=='-'){
        flag2=false;
        for(i=len2-1, j=0; i>0; i--, j++)n[j]=b[i]-48;
        len2--;
    }
    else{
        for(i=len2-1, j=0; i>=0; i--, j++)n[j]=b[i]-48;
    }
    //for(i=0; i<len1; i++)cout<<m[i];
    //cout<<'\n';
    //for(i=0; i<len2; i++)cout<<n[i];



    if(len1>len2||(len1==len2&&m[0]>n[0]))p=m, q=n, lenp=len1, lenq=len2, flagexc=false;
    else p=n, q=m, lenp=len2, lenq=len1, flagexc=true;
	if(flag1&&flag2){
        for(i=0; i<lenp; i++){
            if (p[i]>=q[i])ans[i]=p[i]-q[i];
            else {
                ans[i]=p[i]+10-q[i];
                p[i+1]--;
            }
        }
        if(flagexc)flagans=false;
        else flagans=true;
	}
	else if(((flag1==false)&&flag2)||(flag1&&(flag2==true))){
        for(i=0; i<lenp; i++)ans[i]=p[i]+q[i];
        //cout<<p[i]<<ends<<q[i]<<ends<<ans[i]<<endl;
        for (i = 0; i < lenp; i++) {
		if (ans[i] > 9)ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
	}
        if(flag1&&flag2==false)flagans=true;
        else if(flag1==false&&flag2)flagans=false;
    }
    else if((flag1==false)&&(flag2==false)){
        if(flagexc)flagans=true;
        else flagans=false;
        for(i=0; i<lenp; i++){
            if (p[i]>=q[i])ans[i]=p[i]-q[i];
            else {
                ans[i]=p[i]+10-q[i];
                p[i+1]--;
            }
        }
    }
    //cout<<"flag1="<<flag1<<ends<<"flag2="<<flag2<<ends<<"flagans="<<flagans<<ends<<"flagexc="<<flagexc<<endl;
	for (i = lenp - 1; i >= 0; i--) {
		if (ans[i] == 0) continue;
		else break;
	}
	if(flagans==false)cout<<'-';
	for (; i >= 0; i--) cout << ans[i];
}
