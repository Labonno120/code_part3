#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    vector<int>v;
    ll n,i,j,ans;



    string s,num;
    cin>>s;
    for(i=0;i<n;i++){
            v.push_back(s[i]);
    }

    sort(v.begin(),v.end());

    vector<int> ::iterator upper;

    cin>>num;///the number ,i want to find out from a sorting array..
    upper=upper_bound(v.begin(),v.end(),num);
    cout<<(upper-v.begin())<<endl;///ekhane number ta array tar koto tomo sthane ache seta print korbe
///????????????????????????????????????????????????hoy nai

}

