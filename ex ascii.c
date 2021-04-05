#include<stdio.h>
int main()
{
    char c;
    for(c=65;c<=122;c++)
    {
        if(c>90&&c<97)
        {
            continue;
        }
        printf("|%c - %d",c,c);
    }
    printf("|\n");
}
