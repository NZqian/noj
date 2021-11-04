#include<iostream>
using namespace std;
int main(){
    char s[100], a;
    int i, cnt = 0;
    while((s[cnt] = cin.get())!='\n') cnt++;
    cin>>a;
    for (i = 0; i < cnt; i++){
        if(s[i]!=a) cout<<s[i];
    }
}