/*FileName:T4_30.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:calculate and print diameter,perimeter and area */
#include <iostream>

using namespace std;

int main()
{
    double r,d,l,s;
    cin>>r;
    d=2*r;
    l=2*3.14159*r;
    s=3.14159*r*r;
    cout<<d<<" "<<l<<" "<<s<<" ";
    return 0;
}
