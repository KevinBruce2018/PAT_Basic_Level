#include <bits/stdc++.h>
using namespace std;
typedef struct Linklist
{
	double data;
	struct Linklist* next;
}*linklist,Node;
int main(void)
{
	int n;
	cin>>n;
	std::vector<double>v(n,0);
	for(int i = 0;i < n;i++)
		cin>>v[i];
	sort(v.begin(), v.end());
	linklist link = (linklist)malloc(sizeof(Node));
	link->next = NULL;
	linklist T = link;
	//创建带头结点的链表
	for(int i = 0;i < n;i++)
	{
		linklist tmp = (linklist)malloc(sizeof(Node));
		tmp->data = v[i];
		T->next = tmp;
		T = tmp;
	}
	T->next = NULL;
	//始终保持开头的元素是最小值
	for(int i = 0;i < n - 1;i++)
	{
		double a = link->next->data;
		//时间可以的话应该考虑将用不到的资源进行回收
		link = link->next;
		double b = link->next->data;
		link = link->next;
		double rlt = (a+b)/2.0;
		linklist tmp = link;
		while(tmp->next && tmp->next->data<rlt)
			tmp = tmp->next;
		linklist s = (linklist)malloc(sizeof(Node));
		s->data = rlt;
		s->next = tmp->next;
		tmp->next = s;
	}
	cout<<(int)(link->next->data);
	return 0;
}
