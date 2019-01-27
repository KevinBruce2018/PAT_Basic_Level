#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    s1 = s1+s2;
    vector<int>visit(128,0);
    for(int i = 0;i < s1.length();i++)
    {
        if(!visit[s1[i]])
            cout<<s1[i];
        visit[s1[i]] = 1;
    }
    cout<<endl;
    return 0;
}