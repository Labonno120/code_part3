#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,m,j,count_1=0,count_2=0;
        cin>>n>>m;
        char s[n][m];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
            cin>>s[i][j];
        for(i=0;i<n;i++)
            if(s[i][m-1]=='R')
                    count_1++;
        for(i=0;i<m;i++)
            if(s[n-1][i]=='D')
                    count_2++;

        cout<<count_1+count_2<<endl;
    }
}
