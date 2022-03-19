/*FileName:T4_16.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:calculate and display the total salary of the employee last week*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int h;
    double m,s;
    while(cin>>h)
    {
        cout<<"Enter hours worked (-1 to end): "<<h<<endl;
        if(h==-1)
            return 0;
        else
            {cout<<"Enter hourly rate of the employee ($00.00): 10.00"<<endl;
            if(h<=40)
            s=10.00*h;
        else s=400+(h-40)*15;
        cout<<"Salary is $"<<fixed<<setprecision(2)<<s<<endl;
        cout<<endl;}
    }
    return 0;
}
