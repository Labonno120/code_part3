#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll mark=0;
    vector<ll>v;
    string s;
    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        v.push_back(s[i]-'A');
    }
    if(s.size()<3)
    {
        if(s.size()==1)
            cout<<"YES"<<endl;
        else if(s.size()==2)
            cout<<"YES"<<endl;
    }
    else{
    for(ll i=0,j=1,k=2;i<s.size()-2;i++,j++,k++)
    {
        if(((v[i]+v[j])==v[k])||((v[i]+v[j])==(v[k]+26)))
            continue;
            mark=1;
            //cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
            //cout<<v[i]+v[j]<<endl;
            //cout<<"@"<<mark<<endl;
    }
    if(mark)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
}
