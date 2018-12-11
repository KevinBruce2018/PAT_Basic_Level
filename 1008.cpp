#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>arr(200,0);
	int len,loc;
	cin>>len>>loc;
	loc = loc%len;
	for(int i = 0;i < len;i++)
		cin>>arr[i];
	for(int i = len-1;i >= 0;i--)
		arr[i+loc] = arr[i];
	for(int i = 0;i <loc;i++)
		arr[i] = arr[len+i];
	for(int i = 0;i <len-1;i++)
		cout<<arr[i]<<" ";
	cout<<arr[len-1]<<endl;
	return 0;
}
