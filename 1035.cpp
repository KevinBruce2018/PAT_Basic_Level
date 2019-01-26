#include<bits/stdc++.h>
using namespace std;
bool ismerge(vector<int>a,int n)
{
    bool flag = true;
    for(int i = 0;i < n;i+=2)
    {
        if(i+1<n &&a[i]>a[i+1])
        {
            flag = false;
            break;
        }
    }
    return flag;
}
void insert(vector<int>a,int n)
{
    int pos = 0;
    while(pos<n-1)//原始数据可以说是很无用的存在了……
    {
        if(a[pos]>a[pos+1])
            break;
        pos++;
    }//全逆序的情况也可以处理
    pos++;
    while(pos-1>=0 &&a[pos-1]>a[pos])
    {
        int t = a[pos-1];
        a[pos-1] = a[pos];
        a[pos] = t;
        pos--;
    }
    for(int i = 0;i < n-1;i++)
        cout<<a[i]<<" ";
    cout<<a[n-1]<<endl;
}
void merge(vector<int>a,vector<int>b,int n)
{
    bool flag = true;
    int len=1;
    for(int i = 2;i < n;i*=2)
    {
        for(int j = 0;j < n && flag;j+=i)
            for(int k = j;k<n&& k < j+i &&flag;k++)
                if(k+1 <n &&  k+1 < j+i && a[k]>a[k+1])
                    flag = false;
        if(!flag)
            break;
        len = i;
    }
    for(int i = 0;i < n;i+=(len*2))
    {
        if(i+len*2>=n)
            sort(a.begin()+i,a.end());
        else
            sort(a.begin()+i,a.begin()+i+len*2);
    }
    for(int i = 0;i < n-1;i++)
        cout<<a[i]<<" ";
    cout<<a[n-1]<<endl; 
}
int main(void)
{
    int n;
    cin>>n;
    vector<int>origin(n,0);
    vector<int>sorted(n,0);
    for(int i = 0;i < n;i++)
        cin>>origin[i];
    for(int i = 0;i < n;i++)
        cin>>sorted[i];
    bool flag = ismerge(sorted,n);
    if(flag){
        cout<<"Merge Sort"<<endl;
        merge(sorted,origin,n);
    }
    else{
        cout<<"Insertion Sort"<<endl;
        insert(sorted,n);
    }
    return 0;
}
