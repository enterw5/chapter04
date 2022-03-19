/*FileName:T4_35.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 19,2022
Function:list initialization*/
#include <iostream>
#include<string>
using namespace std;

class Account
{
    unsigned int studentCounter={0};
    double initialBalance={1000.00};
public:
    Account()
    {
        accountNumber=100;
        firstName="Bob";
        lastName="Blue";
        balance=123.00;
        void set_data();
        void show_data();
    }

private:
    unsigned int accountNumber;
    string firstName;
    string lastName;
    double balance;
};

