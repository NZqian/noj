#include<iostream>
using namespace std;
int fun(int a, int b){
	bool flag1=false, flag2=false;int i, s1=0, s2=0;
	for(i=1; i<a; i++){
		if(a%i==0) s1+=i;
	}
	flag1=true;
	for(i=1; i<b; i++){
		if(b%i==0) s1+=i;
	}
	flag2=true;
	if(flag2&&flag2)return 0;
	else return 1;
}
int main(){
	int a, b;
	cin>>a>>b;
	if(fun(a, b)==0)cout<<"YES";
	else cout<<"NO";
}
