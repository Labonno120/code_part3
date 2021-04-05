#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()
{
    map<ll,string>mp;
    ll n;
    cin>>n;
    string s;
    ll rating,mn=INT_MAX,mx=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        cin>>s>>rating;
        mp[rating]=s;
        mn=min(mn,rating);
        mx=max(mx,rating);
    }
    cout<<mp[mn]<<" "<<mp[mx]<<endl;
}
