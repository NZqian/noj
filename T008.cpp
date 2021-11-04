#include<iostream>
using namespace std;
int main()
{
    int y,m,d,all=0,i;
    int days[12]={31,0,31,30,31,30,31,31,30,31,30,31};
    char a,b;
    cin>>y>>a>>m>>b>>d;
    if(y%4==0) days[1]=29;
    else days[1]=28;
    for(i=0;i<m-1;i++){
        all=all+days[i];

        }
    all=all+d;
    cout<<all<<endl;
}
