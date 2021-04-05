#include<stdio.h>
int main()
{
    int math,phy,che,total,total_in_math_phy;
    scanf("%d%d%d",&math,&phy,&che);
    total=math+phy+che;
    total_in_math_phy=math+phy;
    if(math>=60&&phy>=50&&che>=40&&total>=200)
        printf("Eligible candidate");
    else if(math>=60&&phy>=50&&che>=40&&total_in_math_phy>=150)
        printf("Eligible candidate");
    else
        printf("Not eligible");
}
