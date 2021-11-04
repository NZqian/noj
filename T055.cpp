#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void sortj(char a[], int s, int n){
	int i, j, max, maxp;
	for (i=s; i<n-1; i++){
		max=0; maxp=-1;
		for (j=i+1; j<n; j++){
			if (j==i+1){
				max=a[j];
				maxp=j;
			}
			else {
				if(a[j]>max){
					max=a[j];
					maxp=j;
				}
			}
		}
		if(max>a[i])
			swap(a[i], a[maxp]);
	}
}
void sorts(char a[], int s, int n){
	int i, j, min, minp;
	for (i=s; i<n-1; i++){
		min=1000; minp=-1;
		for (j=i+1; j<n; j++){
			if (j==i+1){
				min=a[j];
				minp=j;
			}
			else {
				if(a[j]<min){
					min=a[j];
					minp=j;
				}
			}
		}
		if(min<a[i])
			swap(a[i], a[minp]);
	}
}
int main(){
	char a[100];
	int l, r, cnt=0, i;
	while((a[cnt]=cin.get())!='\n') cnt++;
	cnt--;
	//cout<<cnt<<endl;
	if(cnt%2==0){
		l=cnt/2-1;
		r=cnt/2+1;
	}
	else{
		l=cnt/2;
		r=cnt/2+1;
	}
	//cout<<l<<ends<<r<<endl;
	sortj(a, 0, l+1);
	sorts(a, r, cnt+1);
	//for(i=0; i<=cnt; i++) cout<<a[i];
	//cout<<'\n';
	for(i=r; i<=cnt; i++)
		cout<<a[i];
	if(fabs(l-r)!=1)
		cout<<a[l+1];
	for(i=0; i<=l; i++)
		cout<<a[i];
}
