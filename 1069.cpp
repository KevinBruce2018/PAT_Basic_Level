#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int m,n,s,count = 0;
	bool flag = false;
	set<string>name;
	cin>>m>>n>>s;
	for(int i = 0;i < m;i++)
	{
		string nick;
		cin>>nick;
		//还没有中过奖
		if(name.count(nick)==0)
		{
			count++;
			if(count==s || (count>s&&(count-s)%n==0))
			{
				cout<<nick<<endl;
				flag = true;
				//中奖了
				name.insert(nick);
			}

		}
	}
	if(!flag)
		cout<<"Keep going..."<<endl;
	return 0;
}
