#include<iostream>
using namespace std;
int main()
{
	char ans[10][10]={' '}, in[100]={' '};
	int i, j=-1, k, t, len0=0;

	while((in[len0]=cin.get())!='\n')len0++;

	for(i=0; i<len0; i++){
		k=0;
		if(in[i]!=' '&&in[i]!=','&&in[i]!='.'){
			j++;
			while((in[i]!=' '&&in[i]!=','&&in[i]!='.')&&i<len0){
				//cout<<in[i];
				ans[j][k]=in[i];
				k++;
				i++;

			}
		}
	}

	for(t=j; t>=0; t--){
		i=0;
		while(ans[t][i]!=000){
			cout<<ans[t][i];
			i++;
		}
		cout<<' ';
	}

	return 0;
	//for(i=0; i<len0; i++)
		//cout<<in[i];
}