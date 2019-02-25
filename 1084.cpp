#include<bits/stdc++.h>
using namespace std;
string describe(string rlt)
{
    string result = "";
    int i = 0;
    while(i<rlt.length()){
        char c = rlt[i];
        int count = 0;
        while(i<rlt.length() &&rlt[i]==c){
            count++;
            i++;
        }
        result += c+string(1,count+'0');
    }
    return result;
}
int main(void)
{
    int d,n;
    cin>>d>>n;
    string rlt = string(1,d+'0');
    //构造一个函数即可
    for(int i = 0;i < n - 1;i++)
        rlt = describe(rlt);
    cout<<rlt<<endl;
    return 0;
}