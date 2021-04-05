#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<"or="<<(a|b)<<endl;
        cout<<"xor="<<(a^b)<<endl;
        cout<<"and="<<(a&b)<<endl;
        cout<<"a_not="<<(~a)<<endl;
    }
}
