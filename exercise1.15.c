//program to display arithmetic calculator
#include<stdio.h>
#include<math.h>
void add(float,float);
void sub(float,float);
void product(float,float);
void division(float,float);
int main()
{
    float x,y;
    char op;
    printf("x=");
    scanf("%f",&x);
    printf("y=");
    scanf("%f",&y);
    printf("which kind of operation do you want to perform?(+,-,*,/):");
    scanf("%s",&op);
    if(op=='+')
        add(x,y);
    else if(op=='-')
        sub(x,y);
    else if(op=='*')
        product(x,y);
    else if(op=='/')
        division(x,y);
    else
        printf("Invalid operation");
        return 0;
}
void add(float x,float y)
{
    printf("The result of (%.2f+%.2f) is =%.2f",x,y,x+y);
}
void sub(float x,float y)
{
    printf("The result of(%.2f-%.2f)is=%.2f",x,y,x-y);
}
void product(float x,float y)
{
    printf("The result of(%.2f*%.2f)is=%.2f",x,y,x*y);
}
void division(float x,float y)
{
    printf("The result of(%.2f/%.2f)is=%.2f",x,y,x/y);
}
