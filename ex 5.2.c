#include<stdio.h>
int main()
{
    int sum=0,count=0;
    for(int i=101;i<200;i++)
    {
        if(i%7==0)
        {
            count++;
            sum+=i;
        }
    }
    printf("The number of all integer greater than 100 and less than 200 that are divisible by 7 is:%d",count);
    printf("\nThe sum of all integer greater than 100 and less than 200 that are divisible by 7 is:%d",sum);
}
