#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,max;
    cin>>n>>max;
    for(int i = 0;i < n;i++)
    {
        int teach,sum=0,max_s=0,min_s=max+1,count=0;
        cin>>teach;
        for(int j = 1;j<n;j++)
        {
            int stu;
            cin>>stu;
            if(stu>=0&&stu<=max)
            {
                sum += stu;
                if(stu>max_s)
                    max_s = stu;
                if(stu<min_s)
                    min_s = stu;
                count++;
            }
        }
        sum -= min_s+max_s;
        int avg = (sum*1.0/(count-2)+teach)/2+0.5;
        cout<<avg<<endl;
    }
    return 0;
}
