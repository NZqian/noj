#include<iostream>
using namespace std;
int sqr(int a, int b){
    int i, s=1;
    for(i=0; i<b; i++) s*=a;
    return s;
}
int main(){
    unsigned long long a, b, s;
    int i, j, k, s1=0;
    cin>>a>>b;
    s=a*b;
	while(s>=10){
        for(j=1; s/sqr(10, j)!=0; j++);
        for(k=0; k<j; k++){
            s1+=s/sqr(10, k)%10;
        }
        s=s1; s1=0;
	}
	cout<<s;
}