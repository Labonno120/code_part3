#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,i,j,num,ans,ans1;
    cin>>n;
    ll arr[n+1];
    for(i=0;i<n;i++)cin>>arr[i];

    sort(arr,arr+n);

    cin>>num;///the number ,i want to find out from a sorting array..
    ans=upper_bound(arr,arr+n,num)-arr;
    cout<<"upper_bound="<<ans<<endl;///ekhane number ta array tar koto tomo sthane ache seta print korbe
    ans1=lower_bound(arr,arr+n,num)-arr;
    cout<<"lower_bound="<<ans1<<endl;
    ///upper bound amake dibe num er soman ba kom koyta songkha ache.
    ///lower bound amake dibe,,num er kom koyta songkha ache..
    ///B.worm problem ta dekhte paro lower bound er use..
    ///B.interesting drink problem ta dekhte paro upper bound er use ..

}

