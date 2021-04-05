#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d",&x);
    y=x/5;
    z=x%5;

    if(z==0)
  printf("%d\n",y);
    else
    {

    a=y+1;
    printf("%d",a);
    }
}
