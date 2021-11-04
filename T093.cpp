#include<iostream>
using namespace std;
int main(){
	int n, m[100]={0}, cnt=0, right, i, j;
	while(1){
		i=1;
		j=1;
		cin>>n;
		if(n==0)break;
		else if(n==1){
			m[cnt]=1;
			cnt++;
		}
		else{
			while(n>i){
				i=2*i+1;
				j++;
			}
			m[cnt]=j;
			cnt++;
		}
	}
	for(i=0; i<cnt; i++)
		cout<<m[i]<<endl;
}