/*FileName:T4_18.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 18,2022
Function:print the table*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cout<<"N\t10*N\t100*N\t1000*N"<<endl;
    cout<<endl;
    while(cin>>N)
    cout<<N<<"\t"<<N*10<<"\t"<<N*100<<"\t"<<N*1000<<endl;
    return 0;
}
