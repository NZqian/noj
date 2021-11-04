#include<iostream>
using namespace std;
struct team{
    string name;
    int pro1;
    int time1;
    int pro2;
    int time2;
    int pro3;
    int time3;
    int pro4;
    int time4;
};
int main(){
    int n, i, pros[100]={0}, time[100]={0}, maxpro=0, maxp0=0, maxp[100]={0}, cnt=0;
    team a[100];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i].name>>a[i].pro1>>a[i].time1>>
        a[i].pro2>>a[i].time2>>a[i].pro3>>a[i].time3>>a[i].pro4>>a[i].time4;
    for(i=0; i<n; i++){
        if(a[i].time1!=0){
            pros[i]++;
            time[i]+=a[i].time1+(a[i].pro1>0?a[i].pro1-1:0)*20;
        }
        if(a[i].time2!=0){
            pros[i]++;
            time[i]+=a[i].time2+(a[i].pro2>0?a[i].pro2-1:0)*20;
        }
        if(a[i].time3!=0){
            pros[i]++;
            time[i]+=a[i].time3+(a[i].pro3>0?a[i].pro3-1:0)*20;
        }
        if(a[i].time4!=0){
            pros[i]++;
            time[i]+=a[i].time4+(a[i].pro4>0?a[i].pro4-1:0)*20;
        }
        //cout<<a[i].name<<' '<<pros[i]<<' '<<time[i]<<endl;
    }
    for(i=0; i<n; i++){
        if(pros[i]>=maxpro){
            maxpro=pros[i];
            maxp0=i;
        }
    }
    for(i=0; i<n; i++){
        if(pros[i]==maxp0){
            maxp[cnt]=i;
            cnt++;
        }
    }

    int mintime=1000000,minp=100;
    if(cnt==1)
		cout<<a[maxp[cnt]].name<<' '<<pros[maxp[cnt]]<<' '<<time[maxp[cnt]];
	else{
		for(i=0; i<=cnt; i++){
			//cout<<a[maxp[i]].name<<' '<<pros[maxp[i]]<<' '<<time[maxp[i]]<<endl;
			if(time[maxp[i]]<mintime){
				mintime=time[maxp[i]];
				minp=maxp[i];
			}
		}
		cout<<a[minp].name<<' '<<pros[minp]<<' '<<time[minp];
	}
}