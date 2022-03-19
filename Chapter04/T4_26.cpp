/*FileName:T4_26.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:judge the number of palindromes*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    b=0;c=a;
    while(a>0)
    {
        b=b*10+a%10;
        a=a/10;
    }
    if(c==b)
        cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}
