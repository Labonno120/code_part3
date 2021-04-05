#include<iostream>
using namespace std;
int main()
{
    int n,x,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n==1)cout<<"1"<<endl;
        else if(n==2)cout<<"1"<<endl;
        else if((n-2)%x!=0)
            cout<<((n-2)/x)+2<<endl;
        else
        cout<<((n-2)/x)+1<<endl;
    }
}
