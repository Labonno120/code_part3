#include<iostream>
using namespace std;
int main()
{
    int n,k,i,ans,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        if(k>=n)
            ans=k-n;
        else
        {
            if((n-k)%2==0&&(n-k)/2>1)
                ans=0;
            else
                ans=n-k;
        }
        cout<<ans<<endl;
    }

}
