#include<stdio.h>
int main()
{
    int roll,sub1,sub2,sub3,mx=0,mx1=0,mx2=0,mx3=0,tam,tam1,tam2,tam3,total;
    for(int i=0;i<100;i++)
    {
        scanf("%d%d%d%d",&roll,&sub1,&sub2,&sub3);
        total=sub1+sub2+sub3;
        if(mx<=total)
        {
            mx=total;
            tam=roll;
        }
        printf("total mark that obtained by roll %d is %d\n",roll,total);
        if(mx1<=sub1){
            mx1=sub1;
            tam1=roll;
        }
        if(mx2<=sub2){
            mx2=sub2;
            tam2=roll;
        }
        if(mx3<=sub3){
            mx3=sub3;
            tam3=roll;
        }
    }
    printf("highest mark %d in subject1 is obtained by roll no:%d",mx1,tam1);
    printf("\nhighest mark %d in subject2 is obtained by roll no:%d",mx2,tam2);
    printf("\nhighest mark %d in subject3 is obtained by roll no:%d",mx3,tam3);
    printf("\nroll number of the student who obtained highest total marks :%d",tam);

}
