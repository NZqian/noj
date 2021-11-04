#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int m[100]={0}, i, len, sum, cnt=0;
	while(1){
		getline(cin,s);
		sum=0;
		if(s=="#")break;
		else{
			len=s.length();
			for(i=0; i<len; i++){
				if(s[i]==' ')continue;
				else{
					sum+=(i+1)*(s[i]-64);
				}
			}
			m[cnt]=sum;
			cnt++;
		}
	}
	for(i=0; i<cnt; i++)
		cout<<m[i]<<endl;
}