#include<iostream>
using namespace std;
int main(){
	int n, m[100]={0}, i=1, s=1, j=0;
	cin>>n;
	while(s<n){
		s*=i;
		i++;
		m[j]=s;
		j++;
		if(s==n){
			cout<<"YES";
			return 0;
		}
	}
	s=0;
	for(int t=j-2; t>=0; t--){
		s+=m[t];
		//cout<<s<<endl;
		if(s==n)
			break;
	}
	if(s==n) cout<<"YES";
	else cout<<"NO";
}