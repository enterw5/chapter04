/*FileName:T4_17.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:judge and print the max number of the ten numbers*/
#include <iostream>

using namespace std;

int main()
{
    double number,counter,largest;
    largest=0;counter=0;
    while(counter<10)
       {counter++;
        cin>>number;
    if(largest<number)
        largest=number;

       }
       cout<<"The largest number is :"<<largest<<endl;
    return 0;
}
