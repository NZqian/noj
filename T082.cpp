#include<iostream>
#include<math.h>
using namespace std;
double fun(double a, double b){
	int i, s=1;
	for(i=1; i<=b; i++)
		s=s*a;
	return s;
}
void BubbleSort(double a[],int n){
	int i, j;
	for(i=n-1; i>0; i--){
		for(j=0; j<i; j++){
			if(a[j]<a[j+1]) swap(a[j], a[j+1]);
		}
	}
}
int main(){
	int n, t=0;double s, a[100];
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	BubbleSort(a, n);
	while(s<20){
		s+=2*sqrt(fun(a[t],2)-1);
		//cout<<s<<endl;
		t++;
	}
	cout<<t;
	return 0;
}