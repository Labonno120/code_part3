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
    tc(t){
    ll x,a,b;
    cin>>a>>b;
    x=min(a,b);
    for(;x>=1;x--)
    {
        if(a%x==0&&b%x==0)
        {
            cout<<x<<endl;
            break;
        }
    }

    }

}
