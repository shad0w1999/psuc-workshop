//Program to input an array of n terms and find a term through liner search
#include<iostream>
using namespace std;
int main(){
    int n; //Number of terms
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl;
    int key; //Element to find
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<key<<" found at index "<<i<<endl;
            break; //Jump statement that moves control outside the loop(line 19) as soon as it is encountered
        }
    }
}