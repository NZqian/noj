#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main() {
    string a, b;
	int m[100] = { 0 }, m0[100]={0}, n[100] = { 0 }, n0[100]={0}, ans[200] = { 0 }, i, j, len1, len2;
	bool flag1=true, flag2=true, flagans;
	cin >> a >> b;
	if(a[0]=='-'){
		flag1=false;
		a.erase(0,1);
	}
	if(b[0]=='-'){
		flag2=false;
		b.erase(0,1);
	}
	if(flag1&&flag2) flagans=true;
	else if(!flag1&&!flag2) flagans=false;
	len1 = a.length(); len2 = b.length();

	for (i = len1 - 1, j = 0; i >= 0; i--, j++)m[j] = m0[j] = a[i] - 48;
	for (i = len2 - 1, j = 0; i >= 0; i--, j++)n[j] = n0[j] = b[i] - 48;

	if((flag1&&flag2)||(!flag1&&!flag2)){
		for (i = 0; i < max(len1, len2); i++)
			ans[i]=m[i]+n[i];
	}

	if(flag1&&!flag2){
		for (i = 0; i < max(len1, len2); i++){
			if(a[i]>b[i])
				ans[i]=m[i]-n[i];
			else{
				ans[i]=m[i]+10-n[i];
				m[i+1]--;
			}
			if(ans<0||m[len1]<0){
				for(j=0; j<max(len1,len2); j++)
					ans[j]=0;
				break;
			}
		}
		if(i!=max(len1,len2)){
			for (i = 0; i < max(len1, len2); i++){
				if(n0[i]>=m0[i])
					ans[i]=n0[i]-m0[i];
				else{
					ans[i]=n0[i]+10-m0[i];
					n0[i+1]--;
				}
			}
			flagans=false;
		}
		else flagans=true;
	}
	if(!flag1&&flag2){
		for (i = 0; i < max(len1, len2); i++){
			if(a[i]>b[i])
				ans[i]=m[i]-n[i];
			else{
				ans[i]=m[i]+10-n[i];
				m[i+1]--;
			}
			if(ans<0||m[len1]<0){
				for(j=0; j<max(len1,len2); j++)
					ans[j]=0;
				break;
			}
		}
		if(i!=max(len1,len2)){
			for (i = 0; i < max(len1, len2); i++){
				if(n0[i]>=m0[i])
					ans[i]=n0[i]-m0[i];
				else{
					ans[i]=n0[i]+10-m0[i];
					n0[i+1]--;
				}
			}
			flagans=true;
		}
		else flagans=false;
	}
		//cout<<m[i]<<ends<<n[j]<<ends<<ans[i+j]<<endl;


	for (i = 0; i < max(len1,len2); i++) {
		if (ans[i] > 9)ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
	}
	for (i = max(len1,len2); i >= 0; i--) {
		if (ans[i] == 0) continue;
		else break;
	}
	if(!flagans)
		cout<<'-';
	for (; i >= 0; i--) cout << ans[i];

}
