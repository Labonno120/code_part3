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
    tc(t)
    {
        ll n,one=0,two=0;
        cin>>n;
        ll a[n];
        loop(i,n)
        {
            cin>>a[i];
            if(a[i]==1)one++;
            else two++;
        }
        if(one==0)
        {
            if(two%2==0){out_y;}
            else {out_n;}
        }
        else {
            if(one%2==0){out_y;}
            else {out_n;}
        }

    }
}
