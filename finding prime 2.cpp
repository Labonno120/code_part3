    #include<iostream>
    #include<bits/stdc++.h>
    #define ll long long int
    #define pi 2*acos(0.0)
    #define N ((int)(1e6+2))
    using namespace std;
    ll arr[N];
    int prime (ll);
    int prime (ll n)
    {
        //arr[5000]={0};
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)return 0;
        }
        return 1;



    }
    int main()
    {
        ll t;
        cin>>t;
        while(t--){
            ll n;
            cin>>n;
            cout<<__builtin_popcount(n)<<endl;
            if(n%2!=0){cout<<"YES"<<endl;}
            else if(prime(n)==1||__builtin_popcount(n)==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }

    }
