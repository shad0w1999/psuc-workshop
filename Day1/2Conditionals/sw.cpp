//Program to demonstrate switch case via a menu driven program
#include <iostream>
using namespace std;
int main(){
    cout<<"1. Withdraw\n2. Deposit\n3. Balance\n. Choice: "
    char ch;
    cin>>ch;
    switch(ch){
        case '1':
            cout<<"Withdrawn\n";
            break;
        case '2':
            cout<<"Deposited\n";
            break;
        case '3':
            cout<<"Bhak gareeb\n";
            break;
        default:
            cout<<"Wrong choice\n";
    }
}