#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n,tm=0,one=0,mx=0,a,t=0,c=0;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            one++;
    }

    for(ll i=0;i<n;i++)
    {
        for(ll j=i;j<n;j++)
        {
            tm=one;
            for(ll k=i;k<=j;k++)
            {
                if(arr[k]==0)
                    c++;
                else
                {
                    if(tm>0)
                    tm--;
                }

            }
            mx=max(mx,c+tm);
            c=0;
        }
    }
    cout<<mx<<endl;


}
