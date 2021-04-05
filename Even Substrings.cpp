#include<iostream>
using namespace std;
int main()
{
    int n, i ,sum=0;
    string s;
    cin>> n;
    cin>> s;

    for(i=0;i<n;i++)
    {
        if(s[i]%2==0){
        sum=sum+(i+1);
        //cout<< i<< endl;
        }

    }
    cout<<sum;
}
