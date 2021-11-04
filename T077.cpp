#include<iostream>
using namespace std;
int main(){
	int n, i, cnt, j;
	int a[100]={0};
	cin>>n;
	cnt=n;
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[j]==a[i]){
				a[i]=0;
				a[j]=0;
				cnt=cnt-2;
			}
		}
	}
	for(i=0; i<n&&cnt!=1; i++){
		if(a[i]!=0){
			cout<<a[i]<<' ';
			cnt--;
		}
	}
	for(; i<n; i++){
		if(a[i]!=0)
			cout<<a[i];
	}
}