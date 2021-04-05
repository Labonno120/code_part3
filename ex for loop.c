#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum is:%d",sum);

}
