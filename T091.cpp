#include<iostream>
using namespace std;
void sort(int a[], int n){
	int i, j;
	for(i=n-1; i>0; i--){
		for(j=0; j<i; j++){
			if(a[j]>a[j+1])
				swap(a[j], a[j+1]);
		}
	}
}
int main(){
	int m[15]={0}, n=0, i, j, ans=0;
	while(1){
		cin>>m[n];
		if(m[n]==0)
			break;
		else n++;
	}
	sort(m, n);
	for(i=n-1; i>0; i--){
		for(j=0; j<i; j++)
			//cout<<"m[i]="<<m[i]<<ends<<"m[j]="<<m[j]<<ends<<"m[i]/m[j]="<<double(m[i])/double(m[j])<<endl;
			if(double(m[i])/double(m[j])==2)ans++;
	}
	cout<<ans;
	return 0;
}