#include<bits/stdc++.h>
using namespace std;
string whobig(double my,double a)
{
    if(my==a || fabs(my-a)<0.001)
        return " Ping";
    else if(my>a)
        return " Gai";
    else
        return " Cong";
    
}
int main(void)
{
    int my,x,y;
    bool flag = false;//是否有解

    cin>>my>>x>>y;
    for(int i = 99;i > 9;i--)//甲
    {
        int b = i%10*10 + i/10;//乙
        double c = abs(i-b)*1.0/x;//题目没说丙的类型，就认为是浮点数
        if(fabs(c*y-b)<0.001)
        {
            flag = true;
            cout<<i;
            cout<<whobig(my,i)<<whobig(my,b)<<whobig(my,c)<<endl;
            break;
        }
    }
    if(!flag)
        cout<<"No Solution"<<endl;
    return 0;
}