#include<iostream>
using namespace std;
int main(){
	int n, i=0, s[100]={0};
	cin>>n;
	while(1){
		s[i]=n%2;
		n=n/2;
		if(n==0)
			break;
		i++;
	}
	for(int j=i; j>=0; j--)
		cout<<s[j];
}