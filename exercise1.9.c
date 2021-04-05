//program to covert temperature
#include<stdio.h>
int main()
{
    float C,F;

    //from celsius to fahrenheit
    printf("Enter celsius temperature:");
    scanf("%f",&C);
    F=(9*C)/5+32;
    printf("coverted fahrenheit temperature is:%.2f",F);
    //from fahrenheit to celsius
    printf("\nEnter fahrenheit temperature:");
    scanf("%f",&F);
    C=(5*(F-32))/9;
    printf("coverted celsius temperature is:%.2f\n",C);


}
