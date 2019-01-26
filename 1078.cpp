#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char c;
    string s;
    cin>>c;
    getchar();
    getline(cin,s);
    if(c=='C')
    {
        for(int i = 0;i < s.length();i++)
        {
            int num = 1;
            if(i<s.length()-1 && s[i]==s[i+1]){
                while(i<s.length()-1 && s[i]==s[i+1]){
                    num++;
                    i++;
                }
                cout<<num<<s[i];
            }
            else
                cout<<s[i];
        }
    }
    else
    {
        for(int i = 0;i < s.length();i++)
        {
            if(isdigit(s[i]))
            {
                int num=0;
                while(isdigit(s[i])){
                    num = 10*num+s[i]-'0';
                    i++;
                }
                for(int j = 0;j < num;j++)
                    cout<<s[i];
            }
            else
                cout<<s[i];
        }
    }
    
    return 0;
}
