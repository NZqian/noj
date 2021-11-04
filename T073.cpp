#include<iostream>
using namespace std;
int s;
void QuickSort(int a[], int n)
{
	int i, j;
	for(i=n-1; i>=2; i--){
		for(j=0; j<i; j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				s++;
			}
		}
	}
}
int main()
{
	int n, a[100]={0}, i;
	cin>>n;
	for(i=0; i<n; i++)
		cin>>a[i];
	QuickSort(a, n);
	cout<<s;
}