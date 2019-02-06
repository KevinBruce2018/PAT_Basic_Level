#include<bits/stdc++.h>
using namespace std;
typedef struct shoot
{
    string id;
    int distance;
}shot;

int main(void)
{
    int n,min=0,max=0;
    cin>>n;
    getchar();
    shot* s = new shot[n];
    for(int i = 0;i < n;i++)
    {
        int x,y;
        cin>>s[i].id>>x>>y;
        getchar();
        s[i].distance = x*x+y*y;
        if(s[i].distance>s[max].distance)
            max = i;
        if(s[i].distance<s[min].distance)
            min = i;
    }
    cout<<s[min].id<<" "<<s[max].id<<endl;
    return 0;
}
