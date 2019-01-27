#include<bits/stdc++.h>
using namespace std;
typedef struct mooncake
{
    int code;
    long long num = 0;
}moon;
bool cmp(moon m1,moon m2)
{
    if(m1.num!=m2.num)
        return m1.num > m2.num;
    else
        return m2.code > m1.code;
}
int main(void)
{
    int n,m;
    cin>>n>>m;
    moon* moons = new moon[n];
    for(int i = 0;i< m;i++)
    {
        for(int j = 0;j < n;j++){
            int num;
            moons[j].code = j+1;
            cin>>num;
            moons[j].num += num;
        }
    }
    sort(moons,moons+n,cmp);
    cout<<moons[0].num<<endl;
    long long  max = moons[0].num;
    for(int i = 0;i < n;i++)
    {
        if(moons[i].num==max)
        {
            if(i)
                cout<<" ";
            cout<<moons[i].code;
        }
    }
    return 0;
}