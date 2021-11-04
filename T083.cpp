#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b;
	int i, j;
	double s0, smin1, smin2, s1, s2=100;
	cin>>a>>b;
	s0=double(a)/double(b);
	for(i=1; i<=b; i++){
		for(j=1; ;j++){
			s1=double(j)/double(i);
			//cout<<s1<<ends<<s2<<endl;
			if(j>1){
				if(fabs(s1-s0)<fabs(s2-s0));
				else {
					smin1=fabs(s2-s0);
					break;
				}
			}
			s2=s1;
		}
		if(i==1){
			smin2=smin1;
			cout<<j-1<<'/'<<i<<endl;
		}
		else if(i>1){
			if(smin1<smin2)
				cout<<j-1<<'/'<<i<<endl;
			else continue;
		}
	}
}