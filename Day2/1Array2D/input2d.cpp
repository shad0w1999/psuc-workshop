//Program to showcase basic input and output for 2d array
#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int a[10][10];
    int m=2; //Rows
    int n=3; //Columns
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }
}
