#include<stdio.h>
#include<string.h>
int main()
{
    char a[201];
    char b[201];
    int i,n=0;
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++)
    {
      if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
        {
            b[i]= ' ';
            b[i+1]=' ';
            b[i+2]=' ';
            i=i+3;
        }
        else
        {

            b[i]=a[i];
            //j++;}
        }
            n++;
    }
       printf("%s\n",b);
       printf("%d",n);


}
