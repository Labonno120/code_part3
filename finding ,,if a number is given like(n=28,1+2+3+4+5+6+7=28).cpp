#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
///ami ekta number input dibo,sei number theke ber kora lagbe
///koyta porpor like 1,2,3 jog kore ami input e deya number ta pete pari
///code is here ,,baby->
     ll t;cin>>t;///jotobar iccha
     while(t--)
     {
         ll n;
         ll tm;
         cin>>n;
         tm=sqrt(n);///root korlam
         while((tm*(tm+1))/2<n)///ekhon (tm*(tm+1))/2 ei sutro theke ber korA jay n sonkhok songkhar jogfol
         {
             tm++;
         }
         cout<<tm<<endl;
     }
}
