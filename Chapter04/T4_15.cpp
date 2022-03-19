/*FileName:T4_15.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:calculate and display revenue*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s1,s2;
    while(cin>>s1)
    {
        if(s1==-1)
            cout<<"Enter sales in dollars (-1 to end): -1";
        else
        {cout<<"Enter sales in dollars (-1 to end): "<<fixed<<setprecision(2)<<s1<<endl;
        s2=200+s1*0.09;
        cout<<"Salary is: $"<<fixed<<setprecision(2)<<s2<<endl;
        cout<<endl;
        }
    }

    return 0;
}
