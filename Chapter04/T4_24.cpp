/*FileName:T4_24.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:modify thumbnail format of else*/
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    //a;
    if(y==8)
        if(x==5)
        cout<<"@@@@@"<<endl;
    else
        cout<<"#####"<<endl;
        cout<<"$$$$$"<<endl;
        cout<<"&&&&&"<<endl;

cout<<endl;


    //b
    if(y==8)
        if(x==5)
        cout<<"@@@@@"<<endl;
    else
        {
        cout<<"#####"<<endl;
        cout<<"$$$$$"<<endl;
        cout<<"&&&&&"<<endl;
        }
cout<<endl;

    //c
    if(y==8)
        if(x==5)
        cout<<"@@@@@"<<endl;
    else
        {cout<<"#####"<<endl;
        cout<<"$$$$$"<<endl;}
        cout<<"&&&&&"<<endl;

cout<<endl;

    //d
    if(y==8)
        {if(x==5)
        cout<<"@@@@@"<<endl;}
    else
        cout<<"#####"<<endl;
        cout<<"$$$$$"<<endl;
        cout<<"&&&&&"<<endl;
    return 0;
}
