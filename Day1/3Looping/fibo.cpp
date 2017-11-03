//Program to generae first n terms of the fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n; //Number of terms
    cin>>n;
    int a=0; //First term
    int b=1; //Second term
    int c;
    cout<<a<<", "<<b<<", ";
    for(int count=2;count<n;count++){
        c=a+b; //Next term set to sum of previous two terms
        cout<<c<<", ";
        a=b;
        b=c;
    }
}