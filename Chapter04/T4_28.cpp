/*FileName:T4_28.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:code a checkerboard pattern*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    a=8;b=0;d=0;
    for( c=1;c<8;c++)
    {if(c%2!=0)
    {b=0;
        while(b<a)
    {
        cout<<"* ";
        b++;
    }
    cout<<endl;}
    else
       {cout<<" ";
       d=0;
    while(d<a)
        {

            cout<<"* ";
            d++;
        }
        cout<<endl;}
    }

    return 0;
}
