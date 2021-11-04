#include<iostream>
using namespace std;
int cnt=0;
void Left(char src[], int n,char dest[]){
    int i;
    for(i=0; i<n; i++) dest[i]=src[i];
}
void Right(char src[], int n,char dest[]){
    int i;
    for(i=cnt-n; i<cnt; i++) dest[i-cnt+n]=src[i];
}
void Mid(char src[], int loc, int n,char dest[]){
    int i;
    for(i=loc; i<loc+n; i++) dest[i-loc]=src[i];
}
int main(){
    char src[100];char dest[100]; int n, loc;int i;
    while((src[cnt]=cin.get())!='\n') cnt++;
    cin>>n>>loc;
    Left(src, n, dest);
    for(i=0; i<n; i++)cout<<dest[i];
    cout<<'\n';
    Right(src, n, dest);
    for(i=0; i<n; i++)cout<<dest[i];
    cout<<'\n';
    Mid(src, loc, n, dest);
    for(i=0; i<n; i++)cout<<dest[i];
    cout<<'\n';
}