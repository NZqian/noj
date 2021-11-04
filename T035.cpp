#include<iostream>
#define n 1000000
using namespace std;
int main(){
    double a, b; int i; double s = 0;
    cin>>a>>b;
    for(i = a * n; i < b * n; i++){
        s = s + 1/(1 + (double(i)/double(n))*(double(i)/double(n)));
    }
    s = s / double(n);
    cout<<s<<endl;
}
