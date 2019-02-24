#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m;
    cin>>n>>m;
    vector<int>v(100000,0);
    for(int i = 0;i < n;i++)
    {
        int a,b;
        cin>>a>>b;
        //某个货物指向其对应的货物只指向一次
        if(!v[a])
            v[a] = b;
        if(!v[b])
            v[b] = a;
    }
    for(int i = 0;i < m;i++)
    {
        int k;
        bool flag = false;
        cin>>k;
        int array[1001]={0};
        vector<bool>g(100000,false);
        for(int j = 0;j < k;j++)
        {
            int code;
            cin>>code;
            g[code] =  true;
            array[j] = code;
        }
        for(int j = 0;j < k;j++)
        {
            if(g[v[array[j]]])//如果货物对应的不相容货物存在
            {
                cout<<"No"<<endl;
                flag = true;
                break;
            }
        }
        if(!flag)
            cout<<"Yes"<<endl;
    }
    return 0;
}