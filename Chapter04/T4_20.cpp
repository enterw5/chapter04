/*FileName:T4_20.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:confirm the validity of user input*/
#include <iostream>

using namespace std;

int main()
{
    unsigned int passes=0;
    unsigned int failures=0;
    unsigned int studentCounter=1;
    while(studentCounter<=10)
       {
        cout<<"Enter result (1=pass,2=fail): ";
    int result=0;
    cin>>result;
    while(result!=1&&result!=2)
        cin>>result;
        cout<<result<<endl;
    if(result==1)
        passes=passes+1;
    else
        failures=failures+1;
    studentCounter=studentCounter+1;
       }
       cout<<"Passed"<<passes<<"\nFailed"<<failures<<endl;
       if(passes>8)
        cout<<"Bonus to instructor!"<<endl;
    return 0;
}
