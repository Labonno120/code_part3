//program to find distance between two points
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,D;
    printf("Enter first point(x1,y1):");
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("Enter second point(x2,y2):");
    scanf("%f",&x2);
    scanf("%f",&y2);
    D = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Distance between two points is:%.2f\n",D);
}
