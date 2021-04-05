#include<iostream>
using namespace std;
int main()
{
    long long int n,k,a,b;
    cin>> n>> k;
    a=n/2;
    if(n%2==0)
    {
    if(a>=k)
    {
        b=k*2-1;
    }
    else
    {
        b=(k-a)*2;
    }
    }
    else
    {
        if((a+1)>=k)
        {
            b=k*2-1;
        }
        else
        {
            b=(k-(a+1))*2;
        }

    }
    cout << b;
}
