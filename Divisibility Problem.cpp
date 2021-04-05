#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>> n;
    int a[n+1],b[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%b[i]!=0)
        {

        j=a[i]%b[i];
        k=b[i]-j;
        cout<< k<<endl;
        }
        else
        {
            j=a[i]%b[i];
            cout<< j<<endl;
        }
    }

}
