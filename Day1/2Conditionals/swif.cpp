//Program to implement the switch conditional in sw.cpp using if else if ladder
#include <iostream>
using namespace std;
int main(){
    cout<<"1. Withdraw\n2. Deposit\n3. Balance\n. Choice: "
    char ch;
    cin>>ch;
    if(ch=='1')
        cout<<"Withdrawn\n";
    else if(ch=='2')
        cout<<"Deposited\n";
    else if(ch=='3')
        cout<<"Bhak gareeb\n";
    else
        cout<<"Wrong choice\n";
    }
}