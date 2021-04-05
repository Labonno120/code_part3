#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
#define c(n) int n;int a[n];loop(i,n)cin>>a[i];
using namespace std;
int main()
{
    tc(t)
    {
       ll a,b,c,sum;
       cin>>a>>b>>c;
       sum=a+b+c;
       ll jhamela_pakay=sum/9;
       if(sum%9==0&&a>=jhamela_pakay&&b>=jhamela_pakay&&c>=jhamela_pakay)
       {
           out_y;
       }
       else
       {
           out_n;
       }
    }
}
