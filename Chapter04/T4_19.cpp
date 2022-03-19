/*FileName:T4_19.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:judge and print the largest and larger number of the ten numbers*/
#include <iostream>

using namespace std;

int main()
{
    double number,largest,larger,a;
    int counter;
    largest=0;larger=0;counter=0;
    while(counter<10)
    {
        counter++;
      cin>>number;
      if(largest<number)
           {
            a=largest;
      largest=number;
      larger=a;
           }
      else if(larger<number)
        larger=number;
    }
    cout<<largest<<"   "<<larger;
    return 0;
}
