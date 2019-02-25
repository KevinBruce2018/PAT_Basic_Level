#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    map<int,int>m;
    //练习一下map的使用
    //比较直接的方法是开一个大数组，用hash的方法做
    for(int i = 1;i <= n;i++)
    {
        int num;
        cin>>num;
        if(m.find(abs(num-i)) == m.end())
            m[abs(num-i)] = 1;
        else
            m[abs(num-i)] += 1;
    }
    map<int,int>::iterator iter = m.end();
    for(iter--;iter!=m.begin();iter--){
        if(m[iter->first]>1)
            cout<<iter->first<<" "<<iter->second<<endl;
    }
    if(m[iter->first]>1)
        cout<<iter->first<<" "<<iter->second<<endl;
    return 0;
}