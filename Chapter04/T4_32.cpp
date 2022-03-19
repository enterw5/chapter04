/*FileName:T4_32.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:judge whether it is the three sides of a triangle*/
#include <iostream>

using namespace std;

int main()
{
   double a,b,c;
   cin>>a>>b>>c;
   if(a>0&&b>0&&c>0)
   {if((a+b)>c&&(b+c)>a&&(a+c)>b)
    cout<<"yes";
    else cout<<"no";}
    else cout<<"no";
    return 0;
}
