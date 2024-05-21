#include<iostream>
using namespace std;
int main(){
    float d = 34.4;
    long double e = 34.4;
    cout<<"The value of float d is "<<d<<endl<<"The value of long double e is "<<e<<endl;
    // Can you tell what datatype the literal value 34.4 is in this program?
    // The answer is: it's a double.
    // In C++, any floating point number is taken to be a double.

    // So while passing literal values in function, with the info that
    // it is a floating point number, we send them like this: 34.4f or 34.4F

    // And long double can be sent as: 34.4l or 34.4L
    cout<<"The sizeof 34.4  is: "<<sizeof(34.4)<<endl;       // will return the sizeof double
    cout<<"The sizeof 34.4f is: "<<sizeof(34.4f)<<endl;     // will return the sizeof float
    cout<<"The sizeof 34.4F is: "<<sizeof(34.4F)<<endl;     // will return the sizeof float
    cout<<"The sizeof 34.4l is: "<<sizeof(34.4l)<<endl;     // will return the sizeof long double
    cout<<"The sizeof 34.4L is: "<<sizeof(34.4L)<<endl;     // will return the sizeof long double
    return 0;
}