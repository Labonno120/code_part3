#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t; cin>> t;
    while(t--)
    {
        ll n,mark=0;
        cin>>n;
        for(ll i=3;i<370;i++)
        {
            if(((i-2)*180)%i==0&&((i-2)*180)/i==n)
            {
                mark=1;
                break;
            }
        }
        if(mark)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
