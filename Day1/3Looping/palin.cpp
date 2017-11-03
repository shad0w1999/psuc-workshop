//Program to reverse a given number and see if its palindrome
#include<iostream>
using namespace std;
int main(){
    int num, temp, rev, dig;
    cin>>num;
    temp=num;
    rev=0;
    while(num!=0){
        dig=num%10;
        rev=rev*10+dig;
        num/=10;
    }
    if(rev==temp) cout<<"Palindrome\n";
    else cout<<"Not Palindrome\n";
}