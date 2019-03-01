#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int n,m;
	cin>>n;
	std::vector<int> v(100000,-1);
	std::vector<bool> vis(100000,false);
	std::vector<int>rlt;
	for(int i = 0;i < n;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a] = b;
		v[b] = a;
	}
	cin>>m;
	set<int>s;
	for(int i = 0;i < m;i++)
	{
		int id;
		cin>>id;
		s.insert(id);
	}
	//遍历集合
	set<int>::iterator iter;
	for(iter=s.begin();iter!=s.end();iter++)
	{
		if(vis[*iter]==false)
		{
			if(s.count(v[*iter]))
			{
				vis[v[*iter]] = true;
				vis[*iter] = true;
			}
			else
			{
				vis[*iter] = true;
				rlt.push_back(*iter);
			}
		}
	}
	//输出结果
	cout<<rlt.size()<<endl;
	for(int i = 0;i < rlt.size();i++)
	{
		if(i)
			cout<<" ";
		printf("%05d",rlt[i]);
	}
	return 0;
}
