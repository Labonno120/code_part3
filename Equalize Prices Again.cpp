#include<iostream>
using namespace std;
int main()
{
    int q,n,i,sum=0;
    cin>>q;
    while(q--){
    cin>>n;
    int ar[n+1];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    for(;;)
    {
        if((sum/n)*n>=sum)break;
        else sum++;
    }
    cout<<sum/n<<endl;
    sum=0;
    }
}
