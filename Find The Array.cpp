#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
#define c(n) int n;int a[n];loop(i,n)cin>>a[i];
using namespace std;
int main()
{
    tc(t){
    ll n,odd=0,even=0;
    cin>>n;
    ll ar[n];
    for(ll i=0; i<n; i++)
    {
        cin>>ar[i];
        if((i+1)%2!=0)odd+=ar[i];
        else even+=ar[i];
    }
    if(odd>even)
    {
        for(ll i=0; i<n; )
        {
            cout<<ar[i]<<" ";
            i++;
            if(i>=n)break;
            cout<<"1"<<" ";
            i++;
            if(i>=n)break;
        }
    }
    else{
        for(ll i=0; i<n; )
        {
            cout<<"1"<<" ";
            i++;
            if(i>=n)break;
            cout<<ar[i]<<" ";
            i++;
            if(i>=n)break;
        }
    }
    cout<<endl;
    }
}
