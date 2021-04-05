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
    {        unsigned long long int n,p;
        cin>>n;
        unsigned long long int tm=n;
        while(n!=0)
        {
            p=n%10;
            cout<<p<<" "<<n<<endl;
            if(tm%p!=0)
            {
                cout<<tm+p-(tm%p)<<endl;


            }
            n/=10;
        }
    }
}
