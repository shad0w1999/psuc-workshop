//Program to demonstrate if else ladder
#include<iostream>
using namespace std;
int main(){
    double amount;
    cin>>amount;

    if(amount<=5000&&amount<6000) 
        cout<<"Grde A\n";
    else if(amount<=6000&&amount<7000) 
        cout<<"Grde B\n";
    else if(amount<=7000&&amount<8000) 
        cout<<"Grde C\n";
    else if(amount<=8000&&amount<9000) 
        cout<<"Grde D\n";
    else 
        cout<<"Grade E\n";
}