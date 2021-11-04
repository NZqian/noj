#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x, y, a, b, l, s=0;
	cin>>x>>y>>a>>b>>l;
	if(a==b)cout<<"impossible";
	else{
		while(1){
			x=x+a;
			y=y+b;
			if(x>l)x=x-l;
			if(y>l)y=y-l;
			s++;
			if(x==y)break;
		}
	}
	cout<<s;
}