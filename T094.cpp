#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x[100]={0}, y[100]={0}, year;
	int n, i;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>x[i]>>y[i];
	}
	for(i=0; i<n; i++){
		year=3.1415*(x[i]*x[i]+y[i]*y[i])/100;
		//cout<<year<<endl;
		if(year>double(int(year)))
			year=int(year+1);
		cout<<i+1<<' '<<year<<endl;
	}
}