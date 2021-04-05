#include<iostream>
using namespace std;
int main()
{
  int n;
  int a,p,m=101,i,ans=0;
  cin>>n;
  while(n--)
  {

      cin>>a>>p;
      m=min(m,p);
      ans+=m*a;

  }
  cout<<ans<<endl;
}

