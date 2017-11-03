//Program to input and display an array of n terms
#include<iostream>
using namespace std;
int main(){
    int n; //Number of terms
    cin>>n;
    int a[n];
    /* Modern cpp compilers allow one dimension of an array to be initialized to a unknown number
     * of terms but any further dimensions need a fixed constant bound
     */ 
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<", ";
}