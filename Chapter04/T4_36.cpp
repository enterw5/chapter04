/*FileName:T4_36.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 19,2022
Function:use encryption system to enhance privacy*/
#include <iostream>

using namespace std;

int main()
{
    int a,num1,num2,num3,num4,m,n;

    cin>>a;

    num1=a%10;
    num1=(num1+7)%10;
    num2=a/10%10;
    num2=(num2+7)%10;
    num3=a/100%10;
    num3=(num3+7)%10;
    num4=a/1000%10;
    num4=(num4+7)%10;
    m=num1;
    num1=num3;
    num3=m;
    n=num2;
    num2=num4;
    num4=n;
    cout<<num4*1000+num3*100+num2*10+num1;
    cout<<endl;

    int b,num5,num6,num7,num8,m1,n1;
    cin>>b;
    num5=b%10;
    num6=b/10%10;
    num7=b/100%10;
    num8=b/1000%10;
    m1=num5;
    num5=num7;
    num7=m1;
    n1=num6;
    num6=num8;
    num8=n1;
    if(num5>=7)
    num5-=7;
    else num5+=3;
    if(num6>=7)
    num6-=7;
    else num6+=3;
    if(num7>=7)
    num7-=7;
    else num7+=3;
    if(num8>=7)
    num8-=7;
    else num8+=3;
    cout<<num8*1000+num7*100+num6*10+num5;
    return 0;
}
