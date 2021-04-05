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

    ll a,b,s;
    cin>>a>>b>>s;
    if(abs(a)+abs(b)>s)cout<<"NO"<<endl;
    else if((s-(abs(a)+abs(b)))%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

