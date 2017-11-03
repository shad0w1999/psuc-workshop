//Program to illustrate operator precedence and associativity
#include<iostream>
using namespace std;
int main(){
    int a=6;
    int b=2;
    int c=a++ +b/2;
    /*
     * a++ is evluated first according to the precedence table but since it is postfix
     * the given expression can be written as 6+b/2
     * Since division has higher precedence than addition it is evaluated next giving 6+1
     * So the value of c is 7
     */
    
    cout<<c<<endl;
}