#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        bool flag=0;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=1;i<s.size();i++)
        {
            if(s[i]-s[i-1]>1||s[i]-s[i-1]==0)
            {
                cout<<"No"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<"Yes"<<endl;


    }
}
