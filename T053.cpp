#include<iostream>
using namespace std;
int main(){
    char s1[100], s2[100], s3[100];
    int upper = 0, lower = 0, number = 0, space = 0, other = 0;
    int i, cnt = 0;
    while((s1[cnt]=cin.get())!='\n') cnt ++;
    for(i = 0; i < cnt; i ++){
        if(s1[i]>=65&&s1[i]<=90) upper = upper + 1;
        else if(s1[i]>=97&&s1[i]<=122) lower = lower + 1;
        else if(s1[i]==' ') space = space + 1;
        else if(s1[i]>=48&&s1[i]<=57) number = number + 1;
        else other = other + 1;
    }
    cnt = 0;
    while((s2[cnt]=cin.get())!='\n') cnt ++;
    for(i = 0; i < cnt; i ++){
        if(s2[i]>=65&&s2[i]<=90) upper = upper + 1;
        else if(s2[i]>=97&&s2[i]<=122) lower = lower + 1;
        else if(s2[i]==' ') space = space + 1;
        else if(s2[i]>=48&&s2[i]<=57) number = number + 1;
        else other = other + 1;
    }
    cnt = 0;
    while((s3[cnt]=cin.get())!='\n') cnt ++;
    for(i = 0; i < cnt; i ++){
        if(s3[i]>=65&&s3[i]<=90) upper = upper + 1;
        else if(s3[i]>=97&&s3[i]<=122) lower = lower + 1;
        else if(s3[i]==' ') space = space + 1;
        else if(s3[i]>=48&&s3[i]<=57) number = number + 1;
        else other = other + 1;
    }
    cout<<upper<<' '<<lower<<' '<<number<<' '<<space<<' '<<other<<' '<<endl;
    return 0;
}
