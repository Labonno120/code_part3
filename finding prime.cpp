#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi 2*acos(0.0)
#define N ((int)(1e6+2))
using namespace std;
ll arr[N];
int prime (int);
int prime (int n)
{
    arr[N]={0};
    for(int i=2;i<=N;i++)
    {
        if(arr[i]==0)
        {
            for(int j=2;i*j<=N;j++){
                arr[i*j]=1;
            }
        }
    }
    //if you want to print prime numbers...1 to n.
    for(int i=2;i<=n;i++){
    if(arr[i]==0)
    {
        cout<<i<<" ";
    }
    }
    cout<<endl;
    if(arr[n]==0)
        return 1;//yes,prime.
    else
        return 0;//no,its not.

}
int main()
{
    int n,f;
    cin>>n;
    f=prime(n);
    ll st=sqrt(n);
    cout<<st<<endl;
    if(f==1)
    {
        cout<<"prime"<<endl;
        cout<<n*2+2<<endl;
    }
    else
    {
        cout<<"not prime"<<endl;
        cout<<st*2+(n/st)*2<<endl;
    }
}
