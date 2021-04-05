#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,n2,mx,a,b,t;
    cin>>t;
    while(t--){
    //finding gcd...
    cin>>a>>b;
    n1=a;
    n2=b;
    //while(n1!=n2)
    //{
    // if(n1>n2)
    // n1-=n2;
    // else n2-=n1;
   // }
   cout<<"gcd="<<__gcd(n1,n2)<<endl;

   //end of finding gcd..
   //finding lcm..
   cout<<"lcm="<<a*(b/(__gcd(n1,n2)))<<endl;
    }


}
