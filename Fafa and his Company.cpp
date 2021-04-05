#include<iostream>
using namespace std;
int main()
{
    int p,n,count=0,i;
    cin>>n;
    p=n;
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0){
        count++;
        //cout<<"count="<<count<<endl;
        }
    }
    cout<<count<<endl;
}
