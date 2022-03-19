/*FileName:T4_33.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:judge whether it is the three sides of a right triangle*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,a1,b1,c1;
    cin>>a>>b>>c;
    a1=a*a;
    b1=b*b;
    c1=c*c;
    if(a>0&&b>0&&c>0)
   {if((a+b)>c&&(b+c)>a&&(a+c)>b)
    {if(a1+b1==c1||a1+c1==b1||b1+c1==a1)
        cout<<"yes";
        else cout<<"no";}
        else cout<<"no";}
    else cout<<"no";
    return 0;
}
