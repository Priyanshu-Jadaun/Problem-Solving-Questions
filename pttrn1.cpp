

#include<iostream>
using namespace std;

int main()
{
    int n;
    int x=0;
    cin>>n;
    cin>>x;

    float sum=0.00000;
    int p=1;
    p=p*x;

    int factorial=1;

     int sign=1;
    for(int i=1;i<=n;i++)
    {
        factorial = factorial * i;
        sum = sum +(sign) *((float)(p)/(float)(factorial));
        sign = sign*(-1);
        p=p*x;

    }

    cout<<sum<<endl;
    return 0;
}
