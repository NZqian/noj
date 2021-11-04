#include<iostream>
using namespace std;
int main(){
	int t[100], n, s, e, m, a;
	cin>>n;
	for(int i=0; i< n; i++) cin>>t[i];
	cin>>a;
	s=0, e=n-1, m=(e+s)/2;
	while(1){
		if(s==m){
			cout<<"null";
			break;
		}
		if(a>t[m])
			s=m, m=(e+s)/2;
		else if(a<t[m])
			e=m, m=(e+s)/2;
		else break;
	}
	cout<<m;
}