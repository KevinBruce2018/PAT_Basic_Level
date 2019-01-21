#include<bits/stdc++.h>

using namespace std;
bool isprime(int n)
{
    for(int i = 2;i <= sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}
int main(void)
{
    vector<int>a(10000,-1);
    vector<int>visit(10000,0);
    int n,m;
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        int no;
        cin>>no;
        a[no] = i;
    }
    cin>>m;
    for(int i = 0;i < m;i++)
    {
        int no;
        cin>>no;
        if(a[no]!=-1)
        {
            if(visit[no])
                printf("%04d: Checked\n",no);
            else{
                if(a[no]==1)
                    printf("%04d: Mystery Award\n",no);
                else if(isprime(a[no]))
                    printf("%04d: Minion\n",no);
                else
                    printf("%04d: Chocolate\n",no);
            }
            visit[no] = 1;
        }
        else
            printf("%04d: Are you kidding?\n",no);
    }
    return 0;
}
