//Program to demonstrate implicit and explicit type casting
#include <iostream>
using namespace std;
int main(){
    /*
    * Data types can be cnverted implicitly from left to right but
    * need to be casted from right to left
    * short->int->long->float->double
    */

    //Declaration
    short s=100;
    int i=1024;
    long l=18212618;
    float f=2.8e7;
    double d=1.2e11;

    //Implicit type conversion
    int i1=s;
    long l1=i;
    float f1=l;
    double d1=f;

    cout<<"Implicit\n"<<i1<<endl<<f1<<endl<<d1<<endl;

    //Explicit type conversion
    short s1=(short) i;
    i1=(int) l;
    l1=(long) f;
    f1=(float) d;
    cout<<"Explicit\n"<<s1<<endl<<i1<<endl<<f1<<endl;
}