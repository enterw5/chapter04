/*FileName:T4_34.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:calculte factoria*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //a
    int a,b,c;
    cin>>a;
    b=1;c=1;
    while(c<=a)
    {
        b=b*c;
        c++;
    }
    cout<<b;


    //b
    double num1,sum,m,n;
    cin>>num1;
    m=1;n=1;sum=1;
    while(m<=num1)
        {n=n*m;
        sum=sum+1/n;
        m++;
        }
        cout<<"e="<<fixed<<setprecision(num1)<<sum;

    //c
    double x,sum1,n1,m1,p,t,q;
    cin>>x;
    m1=1;n1=1;sum1=1;p=1;q=1;
    while(m1<=x)
    {
        n1=n1*m1;
        while(p<m1)
          {q=q*x;
          p++;
          }
          t=x/n1;
          sum1=sum1+t;
           m1++;
    }
    cout<<"e^x="<<fixed<<setprecision(x)<<sum1;
    return 0;
}
