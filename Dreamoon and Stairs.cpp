#include<iostream>
using namespace std;
int main()
{
    long long int n,m,p,i,count=0,cnt=0,ans;
    cin>>n>>m;
    if(n==m)cout<<n<<endl;
    else{
     p=n/2;
    ans=p+n%2;
    for(i=0;n>1;i++)
    {
        //cout<<"p="<<p<<endl;
        if((ans+count)%m==0)
        {
            cout<<ans+count<<endl;
            cnt++;
            break;
        }
            n--;
            count++;
    }
    if(cnt==0)cout<<"-1"<<endl;
    }
}
