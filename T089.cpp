#include<iostream>
using namespace std;
int main(){
	int n, i, s=0;
	cin>>n;
	for(i=2; i<n; i++){
		if((n+1)%i==0) s++;
	}
	s=s/2;
	cout<<s;
}