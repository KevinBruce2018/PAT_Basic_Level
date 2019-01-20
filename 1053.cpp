#include<bits/stdc++.h>
using namespace std;

struct home {
    int n; //观察期
    int count = 0;//用电量低于阈值的天数
    bool flagn = false,flage = false;
};
int main(void)
{
    int n,d,count1=0,count2=0;
    double e;
    cin>>n>>e>>d;
    struct home *Home= new home[n];
    for(int i = 0;i < n;i++)
    {
        int k;
        double ele;
        cin>>k;
        if(k>d)
            Home[i].flagn = true;
        for(int j = 0;j < k;j++)
        {
            cin>>ele;
            if(ele<e)
                Home[i].count++;
        }
        if(Home[i].count>k/2)
            Home[i].flage = true;
        if(Home[i].flagn&&Home[i].flage)
            count1++;
        else if(Home[i].flage)
            count2++;
    }
    printf("%.1f%% %.1f%%\n",count2*1.0/n*100,count1*1.0/n*100);
    return 0;
}
