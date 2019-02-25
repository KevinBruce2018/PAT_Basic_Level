#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<int>say(n+1,0),people(n+1,1);
    //读取所说的话
    for(int i = 0;i < n;i++)
        cin>>say[i+1];
    //选择两个狼人
    for(int i = 1;i <=n;i++)
    {
        for(int j = i+1;j <=n;j++)
        {
            int count = 0;
            people[i] = people[j] = -1;
            //两个狼人是否说谎
            bool flag1 = people[abs(say[i])]*say[i]<0;
            bool flag2 = people[abs(say[j])]*say[j]<0;
            //两个狼人都说谎或都没说谎
            if((flag1&&flag2) || (!flag1&&!flag2)){
                people[i] = people[j] = 1;
                continue;
            }
            //一个狼人说谎
            for(int k = 1;k <= n;k++)
            {
                //如果有人说谎
                if(people[abs(say[k])]!=say[k]/abs(say[k]))
                    count++;
            }
            if(count==2){
                cout<<i<<" "<<j<<endl;
                return 0;
            }
            people[i] = people[j] = 1;
        }
    }
    cout<<"No Solution"<<endl;
    return 0;
}