#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n,max=0,count = 0;
    long int min = 1000000000;
    cin>>n;
    vector<int>a(n),result(n,0);
    vector<bool>ismin(n,false),ismax(n,false);
    for(int i = 0;i < n;i++){
        cin>>a[i];
        if(a[i]>=max){
            max = a[i];
            ismax[i] = true;
        }
    }
    for(int i = n-1;i >= 0;i--)
    {
        if(a[i]<=min)
        {
            ismin[i] = true;
            min = a[i];
            if(ismax[i])
                result[count++] = a[i];
        }
    }
    sort(result.begin(),result.begin()+count);
    cout<<count<<endl;
    for(int i = 0;i < count;i++)
    {
        if(i)
            cout<<" ";
        cout<<result[i];
    }
    cout<<endl;
    return 0;
}
