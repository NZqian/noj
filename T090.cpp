#include<iostream>
#include<string> //65 90 97 122
using namespace std;
int main()
{
	string ori, ans_tmp, ans;			//ans_tmp��¼��ǰ��ַ�����ansΪ��ǰ�ַ���
	int len_ori, mid, left0, left, right_tmp, right;
	getline(cin,ori);
	len_ori=ori.length();
	for(mid=1; mid<=len_ori-2; mid++){	//�м������������ƶ�
		left0=mid;
		while(left0>=0){				//��ߵ�һ����left0��mid�����ƶ�,<0ʱֹͣ
			right_tmp=mid+1;
			for(left=left0; left>=0; left--){			//���м���������Ѱ��һ���ַ�
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
						right_tmp=right+1;			//right_tmp��¼�������ʱ�ұߵ�λ�ã�left-1���right_tmp��������
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