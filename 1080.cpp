#include<bits/stdc++.h>
using namespace std;
typedef struct student{
    string code;
    int test = -1,mid = -1,fin = -1;
    double score = 0;
}student;
bool cmp(student s1,student s2)
{
    if((int)(s1.score+0.5)!=(int)(s2.score+0.5))
        return s1.score > s2.score;
    return s1.code < s2.code;
}
//每个数不超过10000，但是三个加起来可能达到3万
//如果数组开小了，将会导致段错误。（注意分析条件）
student *stu = new student[100001];
student *spas = new student[100001];
int main(void)
{
    int p,m,n;
    set<string>s;
    map<string,int>mp;
    int count = 0;
    string code;
    int score;
    cin>>p>>m>>n;
    
    for(int i = 0;i < p;i++)
    {
        cin>>code>>score;
        //学号不存在
        if(!s.count(code))
        {
            s.insert(code);
            mp[code] = count;
            stu[mp[code]].code = code;
            count++;
        }
        
        stu[mp[code]].test = score;
    }
    for(int i = 0;i < m;i++)
    {
        cin>>code>>score;
        if(!s.count(code))
        {
            s.insert(code);
            mp[code] = count;
            stu[mp[code]].code = code;
            count++;
        }
        
        stu[mp[code]].mid = score;
    }
    for(int i = 0;i < n;i++)
    {
        cin>>code>>score;
        if(!s.count(code))
        {
            s.insert(code);
            mp[code] = count;
            stu[mp[code]].code = code;
            count++;
        }
        
        stu[mp[code]].fin = score;
    }
    //筛选有效数据
    int pass = 0;
    for(int i = 0;i < count;i++)
    {
        int mid = stu[i].mid>=0?stu[i].mid:0;
        int fin = stu[i].fin>=0?stu[i].fin:0;
        if(mid>fin)
            stu[i].score = mid*0.4+fin*0.6;
        else
            stu[i].score = fin;
        if(stu[i].test>=200 && int(stu[i].score+0.5)>=60)
        {
            pass++;
            spas[pass-1] = stu[i];
        }
    }
    //对数据进行排序
    sort(spas,spas+pass,cmp);
    for(int i = 0;i < pass;i++)
        cout<<spas[i].code<<" "<<spas[i].test<<" "<<spas[i].mid<<" "<<spas[i].fin<<" "<<(int)(spas[i].score+0.5)<<endl;
    return 0;
}