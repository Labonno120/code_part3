#include<iostream>
using namespace std;
int solve(int);
int main()
{
    int s,sum,t,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>s;
        ans=solve(s);
        cout<<ans<<endl;
    }
}
int solve(int s)
{
    int sum=s-s%10;
    //s=s%10+s/10;
    for(int i =0;s/10!=0;i++)
    {
        s=(s-(s-s%10)+(s-s%10)/10);
        sum+=s-s%10;

        //cout<<sum<<endl;
    }
    if(s%10==0)sum+=1;
    sum+=s%10;

    return sum;
}
