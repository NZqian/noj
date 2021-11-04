#include<iostream>
#include <stdio.h>
using namespace std;
int stringcompare(char s1[],char s2[]){
    int i;
    bool flag = false;

    for(i = 0; i<100; i++){
        if(s1[i]==s2[i]) continue;
        if(s1[i]!=s2[i]){
            return s1[i]-s2[i];
            flag = true;
            break;
        }        if(flag==false) return 0;
    }

}
int main(){
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    cout<<stringcompare(s1, s2);
}