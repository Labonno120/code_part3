#include<stdio.h>
int main()
{
    int a[4],b[7],max,i;

    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\n",a[i]);
    }

        b[0]=a[0]+a[1]*a[2];
        b[1]=a[0]*a[1]+a[2];
        b[2]=a[0]*(a[1]+a[2]);
        b[3]=(a[0]+a[1])*a[2];
        b[4]=a[0]*a[1]*a[2];
        b[5]=a[0]+a[1]+a[2];
        max=b[0];
        for(i=1;i<6;i++)
        {
           if(max<b[i])
           max=b[i];
        }
        printf("%d",max);


}
