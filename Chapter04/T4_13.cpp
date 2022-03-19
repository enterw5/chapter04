/*FileName:T4_13.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 17,2022
Function: calculate and display miles per gallon per trip and print the miles per gallon after the combined calculation of all refuelling up to this tinme*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int m,g,a=0,b=0;
    double M,T;
    while (cin>>m>>g)
    {
        if(m==-1)
        {
             cout<<"Enter the miles used (-1 to quit): -1";
             return 0;
        }
        else {
                cout<<"Enter miles driven (-1 to quit): "<<m<<endl;
        cout<<"Enter gallons used: "<<g<<endl;
        M=1.0*m/g;
        a+=m;
        b+=g;
        T=1.0*a/b;
        cout<<"MPG this trip: "<<fixed<<setprecision(6)<<M<<endl;
        cout<<"Total MPG: "<<fixed<<setprecision(6)<<T<<endl;
        cout<<endl;
        }
    }

    return 0;
}
