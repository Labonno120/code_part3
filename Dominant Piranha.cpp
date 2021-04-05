#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=1,q=-1;
        bool flag =0;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>max){
                max=a[i];


            }
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]==max&&a[i-1]!=max){
                q=i+1;
                flag= 1;
                break;

            }
        }
        if(flag==0)
        {
            for(int i=0;i<n-1;i++)
            {
                if(max==a[i]&&max!=a[i+1])
                {
                    q=i+1;
                    break;
                }
            }
        }
        cout<<q<<endl;

    }
}
