#include<stdio.h>
int main()
{
    int a[200]={0},i=0;
    char ch[]="engineering";
    while(ch[i]!='\0')
    {
        a[(int)ch[i]]++;
        i++;
    }
    char c='e';
    printf("occurrences of e in the string is %d times ",a[(int)c]);
}
