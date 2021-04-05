#include<iostream>
using namespace std;
int main()
{
    int t,cnt1=1,cnt2=0,i;
    string str,p,q;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>str;
        if(p==str)
        {
            cnt1++;
        }
        else if(i!=0) {
             cnt2++;
             q=str;
        }
            if(i==0)
            p=str;
    }
    //cout<<cnt1<<" "<<cnt2<<endl;
    if(cnt1>cnt2)cout<<p<<endl;
    else cout<<q<<endl;
}
