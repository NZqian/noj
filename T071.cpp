#include<iostream>
using namespace std;
int main()
{
	int chinum, lucpos, chi[100]={0}, chicur, card[20];
	int i, crdcnt=-1, chicnt, cnt=0;
	cin>>chinum>>lucpos;
	for(i=0; i<20; i++)
		cin>>card[i];
	for(i=0; i<chinum; i++)
		chi[i]=i+1;
	chicur=chinum;
	while(chicur>lucpos){
		crdcnt++;
		chicnt=0;
		for(i=0; i<chinum; i++){
			if(chi[i]!=0){
				chicnt++;
			}
			if(chicnt<card[crdcnt])
				continue;
			if(chicnt%card[crdcnt]==0){
				chi[i]=0;
				chicnt=0;
				chicur--;
				if(chicur==lucpos)
					break;
			}
		}
	}
	for(i=0; i<chinum; i++){
		if(chi[i]!=0){
			cnt++;
			cout<<i+1<<' ';
		}
		if(cnt==lucpos-1)
			break;
	}
	i++;
	for(; i<chinum; i++)
		if(chi[i]!=0)
			cout<<i+1;
}