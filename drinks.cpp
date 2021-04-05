#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    int array [101];
    cin>>n ;
    for(i=0;i<n;i++)
    {
        cin >> array[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    cout<<(double)sum/n<< endl;

}
