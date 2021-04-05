#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    double a,b,area;
    cin>>a>>b;
    area=(pi*a*a)-(pi*b*b);
    printf("%.2lf",area);
}
