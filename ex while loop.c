#include<stdio.h>
int main()
{
    int sum=0,n,i=1;
    printf("Enter the number :");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("The sum is:%d",sum);

}
