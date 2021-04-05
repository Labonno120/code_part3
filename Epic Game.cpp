#include<iostream>
using namespace std;
int main()
{
     int a,b,n,i,n1,n2,count=0;
     cin>>a>>b>>n;

     for(;;)
     {
         if(count%2==0)n1=a;
         else n1=b;
         n2=n;
         while(n1!=n2)
         {
             if(n1>n2)
                n1-=n2;
             else n2-=n1;
         }
         n=n-n1;
         //cout<<n1<<" "<<n2<<" "<<n<<" "<<count<<endl;
         if(n<n1)
         {
             if(count%2==0)cout<<"0"<<endl;
             else cout<<"1"<<endl;
             break;
         }
         count++;


     }
}
