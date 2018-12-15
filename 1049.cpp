#include<bits/stdc++.h>
using namespace std;
//一道找规律的数学题 需要耐心啊
int main(void)
{
    int n;
    cin>>n;
    double sum=0;
    vector<double>num(n,0);
    for(int i=0;i<n;i++){
        cin>>num[i];
        sum+=(i+1)*num[i]*(n-i);
    }
    printf("%.2lf\n",sum);
    return 0;
}
