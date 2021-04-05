#include<iostream>
#define l long long
using namespace std;
int main()
{
    l t,n,i,count=0,con1,con2,cnt1=0,cnt2=0,j;
    cin>> t;
    for(i=0;i<t;i++)
    {
        cin>> n;
        l arr[n+1];
        for(j=0;j<n;j++)
        {
            cin>> arr[j];

            if(arr[j]%2==0)
                cnt1++;
            if(arr[j]%2!=0)
                cnt2++;
        }
        con1=n/2+n%2;
        con2=n/2;
        if(con1==cnt1&&con2==cnt2)
        {
            for(j=0;j<n;j++)
            {
                if(j%2==0&&arr[j]%2==0)
                    continue;
                else if(j%2==1&&arr[j]%2==1)
                    continue;
                else
                    count++;
            }
            cout<< count/2<< endl;
        }
        else
            cout<< "-1"<< endl;
            count=0;
            cnt1=0;
            cnt2=0;

 }


}
