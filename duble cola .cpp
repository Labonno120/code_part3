#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll m,t;
    cin>>m;
    ll i=5;
    while(m>i)
    {
        m-=i;
        i*=2;
    }
    if(m%(i/5)!=0)
     t=m/(i/5)+1;
    else
     t=m/(i/5);
    if(t==1)
        cout<<"Sheldon"<<endl;
    else if(t==2)
        cout<<"Leonard"<<endl;
    else if(t==3)
        cout<< "Penny"<<endl;
    else if(t==4)
        cout<<"Rajesh"<<endl;
    else
        cout<<"Howard"<<endl;


}
