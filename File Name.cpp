#include<iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    string str;
    cin>>n;
    cin>>str;
    if(n<3)cout<<"0"<<endl;
    else{
    for(int i=0;i<n-2;i++)
    {
        if(str[i]=='x'&&str[i+1]=='x'&&str[i+2]=='x')
            cnt++;
    }
    cout<<cnt<<endl;
    }
}
