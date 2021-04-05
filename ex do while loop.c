#include<stdio.h>
int main()
{
    int sum=0,n,i=1;
    printf("Enter the number :");
    scanf("%d",&n);
    do
    {
        sum+=i;
        i++;
    }
    while(i<=n);
    printf("The sum is:%d",sum);

}

