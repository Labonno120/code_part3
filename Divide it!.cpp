#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,mark=0,cnt=0;
        cin>>n;
        while(n!=1)
        {
            if(n%2==0)
                n=n/2;
            else if(n%3==0)
                n=(2*n)/3;
            else if(n%5==0)
                n=(4*n)/5;
            else
            {
                mark=1;
                break;
            }
            cnt++;
        }
        if(mark==1)
            cout<<"-1"<<endl;
        else
        {
            cout<<cnt<<endl;
        }
    }
}
