#include<iostream>
#include<string> //65 90 97 122
using namespace std;
int main()
{
	string ori, ans_tmp, ans;			//ans_tmp记录当前最长字符串，ans为当前字符串
	int len_ori, mid, left0, left, right_tmp, right;
	getline(cin,ori);
	len_ori=ori.length();
	for(mid=1; mid<=len_ori-2; mid++){	//中间数从左向右移动
		left0=mid;
		while(left0>=0){				//左边第一个数left0从mid向左移动,<0时停止
			right_tmp=mid+1;
			for(left=left0; left>=0; left--){			//从中间数向两边寻找一样字符
				/*if(ori[left]==' '){
					ans.insert(0, 1, ' ');
					continue;
				}
				else if(ori[left]==','){
					ans.insert(0, 1, ',');
					continue;
				}*/
				for(right=right_tmp; right<=len_ori-1; right++){
					/*if(ori[right]==' '){
						ans.insert(ans.length(), 1, ' ');
						continue;
					}
					else if(ori[right]==','){
						ans.insert(ans.length(), 1, ',');
						continue;
					}*/
					if((ori[left]==ori[right])||(ori[left]>=65&&ori[left]<=90&&ori[right]==ori[left]+32)||(ori[right]>=65&&ori[right]<=90&&ori[left]==ori[right]+32)){
						if(right-left==2)
							ans.insert(0, 1,ori[left+1]);
						ans.insert(0, 1, ori[left]);
						ans.insert(ans.length(), 1, ori[right]);
						right_tmp=right+1;			//right_tmp记录左右相等时右边的位置，left-1后从right_tmp向右搜索
						break;
						//cout<<ans<<ends<<left<<ends<<right<<endl;
					}
				}
			}
			//cout<<mid<<ends<<ori[mid]<<ends<<ans<<endl;
			if(ans.length()>ans_tmp.length())
				ans_tmp=ans;
			ans="";
			left0--;
		}
	}
	cout<<ans_tmp;
}