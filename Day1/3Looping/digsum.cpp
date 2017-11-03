//Program to calculate sum of digits of a number
#include<iostream>
using namespace std;
int main(){
    int num, sum, dig;
    cin>>num;
    sum=0;
    while(num!=0){
        dig=num%10;
        sum+=dig;
        num/=10;
    }
    cout<<"Sum: "<<sum<<endl;
}