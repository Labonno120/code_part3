#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    tc(t)
    {
        ll chill=1;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(chill==1)
            {
                if(s[i]!='a')s[i]='a';
                else s[i]='b';
                chill=2;

            }
            else if(chill==2)
            {
                if(s[i]!='z')s[i]='z';
                else s[i]='y';
                chill=1;
            }
        }
        cout<<s<<endl;

    }
}

