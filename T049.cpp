#include<iostream>
using namespace std;
void BubbleSort(int a[], int s, int m){
	int i, j;
	for(i=s+m-1; i>s; i--){
		for(j=s; j<i; j++){
			if(a[j]<a[j+1]) swap(a[j], a[j+1]);
		}
	}
}
int main(){
	int n, s, m, a[100];
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	cin>>s>>m;
	BubbleSort(a, s, m);
	for(int i=0; i<n; i++)
		cout<<a[i]<<' ';
	return 0;
}