#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,i;
    cin>>l>>r;
    for(i=l;i<=r;i++)
    {
        int tm=i,mod;
        bool flag=1;
        int a[10]={0};
        while(tm)
        {
            mod=tm%10;
            a[mod]++;
            tm=tm/10;

        }
        for(int j=0;j<10;j++)
        {
            if(a[j]>1)
            {
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
}

