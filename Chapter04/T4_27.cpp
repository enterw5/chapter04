/*FileName:T4_27.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:print decimal values of binary numbers*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,sum;
    cin>>a;sum=0;
    c=0;d=0;
    while(a>0)
    {
        b=a%10;
        c++;
        d=0;
        while(d<(c-1))
        {
            b=b*2;
            d++;
        }
    a=a/10;
    sum=sum+b;
    }
   cout<<sum;

    return 0;
}
