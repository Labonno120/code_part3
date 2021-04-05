#include<iostream>
using namespace std;
int main()
{
    int n,t_l,t_f,ct=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]&&a[i]==1)
        {
           t_f=i;
           break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]!=a[i-1]&&a[i]==1)
        {
            t_l=i;
            break;
        }
    }
    for(int j=t_f;j<=t_l;j++)
    {
        if(a[j]==0)ct++;
    }
    cout<<ct+2<<endl;
    cout<<t_f<<" "<<t_l<<endl;
}
