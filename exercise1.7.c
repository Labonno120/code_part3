/*program to add two numbers and finding the difference of these two numbers
*/
#include<stdio.h>
#include<math.h>
int add(int,int );
int sub(int,int);
int main()
{
    int sum,difference;
    int x=20,y=10;
    sum=add(x,y);
    difference=sub(x,y);
    printf("%d+%d=%d\n",x,y,sum);
    printf("%d-%d=%d\n",x,y,difference);
}
int add(int x,int y)
{
    return (x+y);
}
int sub(int x,int y)
{
    return(abs(x-y));
}
