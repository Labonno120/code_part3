#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a;

    int i;
    cin>> a;

    for(i=0;i<a.size();i++)
    {
      if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
        {
         a[i]=' ';
        a[i+1]=' ';
        a[i+2]=' ';
        i=i+2;
        }
        else
        {

            a[i]=a[i];

       }

    }

    cout<< a;

}
