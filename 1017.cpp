#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    int n,x=0;
    cin>>s>>n;
    //大数模 直接模拟
    for(int i = 0;i < s.length();i++)
    {
        x = x*10+s[i]-'0';
        if(i || x/n || !(s.length()-1))
            cout<<x/n;
        x = x%n;
    }
    cout<<" "<<x;
    return 0;
}