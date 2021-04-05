#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,mx=INT_MIN,gd;
    map<ll,ll>mp;
    vector<ll>vc;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    sort(a,a+n);
    for(ll i=n-1;i>0;i--)
    {
        if(a[i]==a[i-1])
        {
            gd=a[i];
            break;
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(mx%a[i]==0&&mp[a[i]]==0)
        {
            mp[a[i]]++;
        }
        else{
                vc.push_back(a[i]);
               // cout<<a[i]<<" ";

        }
    }

    for(ll i=vc.size()-1;i>=0;i--)
    {
            if(__gcd(vc[i],mx)==gd)
            {
                cout<<mx<<" "<<vc[i]<<endl;
                break;
            }
    }


}
