#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int i=1, j=1;
    double sum=0;
    do{
       sum+=(1.0/i)*j;
       j=-j;
       i+=2;
    }while(fabs(1.0/i)>=1e-6);
    cout<<fixed<<setprecision(6)<<4*sum;
}