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
       ll n,mark=0,mark1=0,get;
       cin>>n;
       ll a[n];
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]%2==0){
                get=i+1;
                mark=1;
           }

       }
       if(mark==1){
            cout<<1<<endl;
            cout<<get<<endl;
       }
       else{
       for(ll i=0;i<n-1;i++)
       {
           if(a[i]%2==1&&a[i+1]%2==1)
           {
               cout<<2<<endl;
               cout<<i+1<<" "<<i+2<<endl;
               mark1=1;
               break;
           }
       }
       if(mark1==0)cout<<"-1"<<endl;
       }
    }
}

