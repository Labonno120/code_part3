#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    map<int,int>mp;
    vector<int>vc;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int j=0;j<n;j++)
    {
        if(mp[a[j]]==0){
        mp[a[j]]++;
        //cout<<"j="<<j<<endl;
        vc.push_back(j+1);
        c++;
        }

    }
    //cout<<c<<endl;
    if(c<k)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++)
            cout<<vc[i]<<" ";
        cout<<endl;
    }
}
