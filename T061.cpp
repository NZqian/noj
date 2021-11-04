#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	FILE *fp1, *fp2;
	char s1[100]={000}, s2[100]={000};
	int i, j=0;
	fp1=fopen("DATA5613.TXT","rb");
	fp2=fopen("DATA5613.CPP","rb");
	if(fp1!=NULL&&fp2!=NULL){
		while(!feof(fp1)&&!feof(fp1)){
			j++;
			fgets(s1, sizeof(s1)-1, fp1);
			fgets(s2, sizeof(s2)-1, fp2);
			i=0;
			while(s1[i]!=000&&s1[i]!=000){
				//cout<<s1[i]<<' '<<s2[i]<<endl;
				if(s1[i]!=s2[i]){

					cout<<j<<' '<<i+1<<endl;
				}
				i++;
			}
			memset(s1,0,sizeof(s1));
			memset(s2,0,sizeof(s2));
		}
		fclose(fp1);
		fclose(fp2);
	//else printf("error");return 0;
	}
	//cout<<cnti<<endl<<cntw<<endl<<cnti<<endl;
	return 0;
}