#include<iostream>
using namespace std;
int main()
{
    int t,i,j,p=0,q=0;
    string s;
    cin>>t;
    while(t--)
    {
        int r=0;
        int cnt=0;
        cin>>s;
        for(i=0;i<s.size();i++)
        if(s[i]=='1')
        {
         p=i;
         r=1;
         break;
        }
        for(i=s.size();i>=0;i--)
        if(s[i]=='1')
        {
         q=i;
         break;
        }
        for(j=p;j<q;j++)
        {
            if(s[j]=='0')
            {
                cnt++;
            }
        }
        //cout<<p<<" "<<q<<endl;
        cout<<cnt<<endl;

        p=0;
        q=0;
    }
}
