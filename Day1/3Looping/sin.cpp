#include<iostream>
#include<math.h>
using namespace std;
int factorial(int k){
  int fact=1;
  while(k!=0){
    fact=fact*k;
    k--;

  }
  return fact;
}
int main(){
  cout<<"enter the number of number of terms to be added";
   int n;
   float x,sum=0;
  cin>>n;
  cout<<"enter the value of x";
  cin>>x;
  for(int i=1;i<=n;i++){
    sum=sum+((pow(-1,n+1)*pow(x,2*n-1))/factorial(2*n-1));

  }
  cout<<"sin x="<<sum;
  return 0;
}
