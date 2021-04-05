#include<stdio.h>
int main()
{
    int arr[15],pos=0,neg=0;
    printf("enter 15 numbers:");
    for(int i=0;i<15;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            break;
    }
    printf("number of positive:%d",pos);
    printf("\nnumber of negative:%d",neg);
}
