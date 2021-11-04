#include<iostream>
using namespace std;
int main()
{
	int n, j, m, f, i, m0, f0;
	while(1){
		cin>>n;
		m=0, f=0; i=1;
		if(n==-1)break;

		else{
			for(j=1; j<=n; j++){
				m0=m, f0=f;
				m=m0+i+f0;
				f=m0;
			}
			cout<<m<<' '<<m+f+i<<endl;
		}
	}
}