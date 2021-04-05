#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{

    int t;
    cin>>t;

    int cnt=0,mx=0,h,m;
   string str;
    map<string,int>s;
    int arr[24][60]={0};
    for(int i=0;i<t;i++)
    {
        cin>>str;
        s[str]++;
        if(s[str]>mx)
            mx=s[str];
        //cout<<"mx="<<mx<<endl;
    }

    cout<<mx<<endl;
}

