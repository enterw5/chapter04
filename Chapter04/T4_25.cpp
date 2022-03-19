/*FileName:T4_25.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:print a hollow square*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a;
    b=0;c=0;d=0;
    while(b<a)
        {cout<<"*";
        b++;}
        cout<<endl;
    for(int e=0;e<a-2;e++)
       {
        while(c<a)
        {
            c++;
            if(c==1||c==a)
                cout<<"*";
            else cout<<" ";
        }
        c=0;
        cout<<endl;
       }
    while(d<a)
    {
        cout<<"*";
        d++;
    }
    return 0;
}
