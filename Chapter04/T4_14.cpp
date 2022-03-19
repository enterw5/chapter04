/*FileName:T4_14.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 17,2022
Function:judge whether the payment amount of mall customers exceeds the credit limit of the credit account*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int acc;
    double beg,tch,tcr,cl,nb;//beg代表beginning balance,tch代表total charges,tcr代表total credits,cl代表credit limit,nb代表new balance
    while(cin>>acc>>beg>>tch>>tcr>>cl)
    {cout<<"Enter accout number (or -1 to quit): "<<acc<<endl;
    cout<<"Enter beginning balance: "<<fixed<<setprecision(2)<<beg<<endl;
    cout<<"Enter total charges: "<<fixed<<setprecision(2)<<tch<<endl;
    cout<<"Enter total credits: "<<fixed<<setprecision(2)<<tcr<<endl;
    cout<<"Enter credit limit: "<<fixed<<setprecision(2)<<cl<<endl;
    nb=beg+tch-tcr;
    cout<<"New balance is "<<fixed<<setprecision(2)<<nb<<endl;
    if(nb<cl)
        {
            cout<<endl;
            cout<<"Enter Account Number (or -1 to quit): -1"<<endl;}
    else {
            cout<<"Account:      "<<acc<<endl;
            cout<<"Credit limit: "<<cl<<endl;
            cout<<"Balance:      "<<nb<<endl;
            cout<<"Credit Limit Exceeded."<<endl;
            cout<<endl;}}
    return 0;
}
