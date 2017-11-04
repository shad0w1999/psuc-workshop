//Program to swap primary and secondary diagonal elements for a 2d array
#include <iostream>
using namespace std;
int main(){
    int a[10][10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int temp;int k=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                temp=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=temp;
                k--;
            }
        }
    }
    cout<<"After swapping\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}