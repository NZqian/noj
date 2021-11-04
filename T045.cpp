#include<iostream>
using namespace std;
void QuickSort(int a[], int left, int right){
	int i=left+1, j=right, t;
	if(left<right){
		while(1){
			while(a[i]>a[left]){
				if(i==right) break;
				i++;
			}
			while(a[j]<a[left]){
				if(j==left) break;
				j--;
			}
			if(i<j){
				t=a[i]; a[i]=a[j]; a[j]=t;
				continue;
			}
			else break;
		}
		t=a[left]; a[left]=a[j]; a[j]=t;

		QuickSort(a, left, j-1);
		QuickSort(a, j+1, right);
	}
}
int main(){
	int n, i, s, m, a[100]={0};
	cin>>n;
	for(i=0; i<n; i++)
		cin>>a[i];
	cin>>s>>m;
	QuickSort(a, s, m);
	for(i=0; i<n-1; i++)
		cout<<a[i]<<' ';
	cout<<a[i]<<endl;
	return 0;
}