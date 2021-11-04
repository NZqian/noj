#include<iostream>
using namespace std;
int main(){
	int a, b, c, d, up, down, i, flag=0;
	char q, oper, e;
	cin>>a>>q>>b>>oper>>c>>e>>d;
	if(oper=='+')
		up=a*d+b*c;
	else
		up=a*d-b*c;
	down=b*d;
	do{
		flag=0;
		for(i=2; i<max(up, down); i++){
			if((up%i==0)&&(down%i==0)){
				up=up/i;
				down=down/i;
				flag++;
			}
		}
	}while(flag!=0);
	cout<<up<<'/'<<down;
}