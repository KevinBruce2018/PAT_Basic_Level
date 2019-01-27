#include<bits/stdc++.h>
using namespace std;
bool isprime(long num)
{
    if(num==1)
        return false;
    for(int i = 2;i <= sqrt(num);i++)
        if(num%i==0)
            return false;
    return true;
}
int main(void)
{
    int n,m;
    string s;
    cin>>n>>m;
    getchar();
    getline(cin,s);
    bool flag = false;
    for(int i = 0;i<n-m+1;i++)
    {
        char a[1000];
        for(int j = i;j < i+m;j++)
            a[j-i] = s[j];
        a[i+m] = 0;
        long num = atol(a);
        if(isprime(num))
        {
            cout<<a<<endl;
            flag = true;
            break;
        }
    }
    if(!flag)
        cout<<"404"<<endl;
    return 0;
}