#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k,i,j,mn=INT_MAX,sum=0,index,t;
    vector<ll>vc;
    cin>>n>>k;
    ll arr[n+1],ar[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<=n; i++)
    {
        ar[i]=sum;
        sum+=arr[i];

    }
    for(i=0; i<=n,k<=n; i++,k++)
    {
        if(ar[k]-ar[i]<mn)
        mn=ar[k]-ar[i];
        //cout<<mn<<endl;
        vc.push_back(ar[k]-ar[i]);


    }
    for(i=0; i<vc.size(); i++)
    {
        if(mn==vc[i])
            index=i+1;

    }
        cout<<index<<endl;
}


