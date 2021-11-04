#include<stdio.h>
#include<iostream>
#include<cstring>
int main(){
	FILE *fp;
	char s[100];
	int i, cnti=0, cntw=0, cntf=0;
	fp=fopen("DATA5610.TXT","rb");
	if(fp!=NULL){
		while(!feof(fp)){
			if(fgets(s, sizeof(s)-1, fp)==NULL)continue;
			for(i=0; i<100; i++){
				if(s[i]=='i'&&s[i+1]=='f'){
					cnti++;
					i++;
				}
				if(s[i]=='w'&&s[i+1]=='h'&&s[i+2]=='i'&&s[i+3]=='l'&&s[i+4]=='e'){
					cntw++;
					i=i+4;
				}
				if(s[i]=='f'&&s[i+1]=='o'&&s[i+2]=='r'){
					cntf++;
					i=i+2;
				}
			}
			memset(s,0,sizeof(s));
		}
		fclose(fp);
	}
	//else printf("error");return 0;
	printf("%d %d %d",cnti,cntw,cntf);
	//cout<<cnti<<endl<<cntw<<endl<<cnti<<endl;
	return 0;
}
