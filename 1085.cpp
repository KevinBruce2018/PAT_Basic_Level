#include<bits/stdc++.h>
using namespace std;

typedef struct school
{
    double score = 0;
    string name;
    int stunum = 0;
    int no;
}school;
bool cmp(school s1,school s2)
{
    if(((int)s1.score)!=(int)s2.score)
        return s1.score > s2.score;
    else if(s1.stunum!=s2.stunum)
        return s1.stunum < s2.stunum;
    else
        return s1.name < s2.name;
    
}
int main(void)
{
    //freopen("input.txt","r",stdin);
    std::ios::sync_with_stdio(false);
    int n,count = 0;
    set<string>s;
    map<string,int>m;
    string code,scname;
    double score;
    cin>>n;
    
    school *sc = new school[n];
    for(int i = 0;i < n;i++)
    {
        cin>>code>>score>>scname;
        //加上个getchar直接凉凉2个点，不全凉，但是为啥
        for(int j = 0;j < scname.length();j++)
            scname[j] = tolower(scname[j]);
        if(s.count(scname)==0)//学校不存在
        {
            s.insert(scname);
            m[scname] = count;
            sc[count].name = scname;
            count++;
        }
        if(code[0]=='A')
            sc[m[scname]].score += score;
        else if(code[0]=='B')
            sc[m[scname]].score += score/1.5;
        else
            sc[m[scname]].score += score*1.5;
        sc[m[scname]].stunum++;  
    }
    sort(sc,sc+count,cmp);
    cout<<count<<endl;
    cout<<"1 "<<sc[0].name<<" "<<(int)sc[0].score<<" "<<sc[0].stunum<<endl;
    sc[0].no = 1;
    for(int i = 1;i < count;i++){
        if((int)sc[i].score==(int)sc[i-1].score )
        {
            cout<<sc[i-1].no<<" ";
            sc[i].no = sc[i-1].no;
            cout<<sc[i].name<<" "<<(int)sc[i].score<<" "<<sc[i].stunum<<endl;
        }
        else
        {
            sc[i].no = i + 1;
            cout<<sc[i].no<<" "<<sc[i].name<<" "<<(int)sc[i].score<<" "<<sc[i].stunum<<endl;
        }
        
    }
    return 0;
}