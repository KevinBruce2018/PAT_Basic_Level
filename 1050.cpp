#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}
void result(int n,int m,vector<int>num);
int account;
int show[10002][10002];
int main(void)
{
    int N,m,n;
    std::ios::sync_with_stdio(false);
    cin>>N;
    vector<int>num(N,0);
    for(int i = 0;i < N;i++)
        cin>>num[i];
    sort(num.begin(),num.end(),cmp);
    for(int i = (int)sqrt(N);i > 0;i--)
    {
        if(N%i==0)
        {
            m = N/i;
            n = i;
            break;
        }
    }
    for(int i = 0;i <= m+1;i++)
        for(int j = 0;j <= n+1 ;j++)
            show[i][j] = i>0&&i<=m&&j>0&&j<=n?0:-1;
    result(N,m,num);
    return 0;
}
void result(int n,int m,vector<int>num)
{ 
    int i=1,j=1;
    while(account<n)
    {
        for(;show[i][j]==0;j++)
            show[i][j] = num[account++];
        j--,i++;
        for(;show[i][j]==0;i++)
            show[i][j] = num[account++];
        i--,j--;
        for(;show[i][j]==0;j--)
            show[i][j] = num[account++];
        j++,i--;
        for(;show[i][j]==0;i--)
            show[i][j] = num[account++];
        i++,j++;
    }
    for(int i = 1;i <= m;i++)
    {
        for(int j = 1;j <= n/m;j++)
        {
            if(j!=1)
                cout<<" ";
            cout<<show[i][j];
        }
        cout<<endl;
    }
}
