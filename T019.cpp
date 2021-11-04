#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a=2, b=1, c, x=1, y=1, z;int i;
    double sum=0;
    for(i=1; i<=20; i++){
        sum=sum+a/x;
        //cout<<a<<ends<<x<<ends<<sum<<endl;
        c=a; a+=b; b=c;
        z=x; x+=y; y=z;
    }
    cout<<fixed<<setprecision(6)<<sum;
}