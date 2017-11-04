//Program to add the elements in two 2d arrays
#include <iostream>
using namespace std;
int main(){
    int a[10][10];
    int m=2; //Rows
    int n=3; //Columns
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[10][10];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    int c[10][10];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           c[i][j]= a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}
