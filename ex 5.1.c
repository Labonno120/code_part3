#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num%2==0){
        printf("NUMBER IS EVEN");
        return 0;
    }

    printf("NUMBER IS ODD");

}
