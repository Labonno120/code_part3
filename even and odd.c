#include<stdio.h>
int main()
{
    long long int n,k,i,j=0,p=0;
    scanf("%lld%lld",&n,&k);
    long long int a[n+1];
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            a[i]=1+j;
            j=j+2;
        }
        for(i=n/2;i<n;i++)
        {
            a[i]=2+p;
            p=p+2;
        }
    }
    else if(n%2!=0)
    {
        for(i=0;i<n/2+1;i++)
        {
            a[i]=1+j;
            j=j+2;
        }
        for(i=n/2+1;i<n;i++)
        {
            a[i]=2+p;
            p=p+2;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==k-1)
        {
            printf("%lld",a[i]);
        }
    }
}
