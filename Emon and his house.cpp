#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    ll t;cin>>t;
    for(ll j=1;j<=t;j++)
    {
        ll n,s=0;
        cin>>n;
        ll a[n];
        loop(i,n)
        {
            cin>>a[i];
            s+=a[i];
            //mn=min(mn,a[i]);
        }
        sort(a,a+n);
        ll p=a[0];
        again:
      for(ll i=1;i<n;i++)
        {
          //ll p=a[n-1];
            if(a[i]%p!=0)
            {
                p--;
                goto again;
            }
        }
        cout<<"Case "<<j<<" "<<":"<<" "<<p<<" "<<s/p<<endl;

    }
}
