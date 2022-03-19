/*FileName:T4_37.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 19,2022
Function:world population growth*/
#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,m,n;
    cin>>a>>b;
    c=1;n=a;d=0;
    cout<<"year\t\t\ttoltal population\tpopulation growth";
    cout<<endl;
    while(c<=75)
    {
        cout<<c<<"\t\t\t";
        m=a*b;
        a=a+m;
        c++;
        cout<<a<<"\t\t\t"<<m;
        cout<<endl;
        if(d==0)
        {if(a>=(2*n))
            {
            cout<<c-1<<endl;
            d++;}}
    }
    return 0;
}
