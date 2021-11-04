#include<iostream>
using namespace std;
void SelectionSort(int a[], int s, int m){
	int i, j, max=0, maxp=0;
	for(i=s; i<s+m-1; i++){
		max=0, maxp=0;
		for(j=i+1; j<=s+m-1; j++){
			if(a[j]>max){
				max=a[j];
				maxp=j;
			}
		}
		if(a[i]<a[maxp]) swap(a[i], a[maxp]);
	}
}
int main(){
	int a[100]={0}, n, s, m, i;
	cin>>n;
	for(i=0; i<n; i++)
		cin>>a[i];
	cin>>s>>m;
	SelectionSort(a, s, m);
	for(i=0; i<n; i++)
		cout<<a[i]<<' ';
	return 0;
}