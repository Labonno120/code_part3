#include<iostream>
using namespace std;


int main()
 {
    long long int n,t,i,sum=0,j;
    cin>> t;
    for(i=0;i<t;i++)
    {
        cin>>n;

      int divisor = 0;
      for (int i = 1; i * i <= n; i++)
        {
      if (i * i == n) {
      divisor += 1;
    }
    else if (n % i == 0) {
      divisor += 2;
    }
      }
        cout<< divisor<<endl;

        sum=0;
    }

}
