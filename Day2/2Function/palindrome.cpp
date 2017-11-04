//Program to check if a number is palindrome using functions
#include <iostream>
using namespace std;
int rev(int n){
    int rev=0, dig=0;
    while(n!=0){
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
}
int main(){
    int t;
    cin>>t;
    int r=rev(t);
    if(t==r){
        cout<<"Palindrome\n";
    }
    else{
        cout<<"Not palindrome\n";
    }
}