#include<iostream>
#include<iomanip>       // to use setw
using namespace std;
int main(){
    int a=7, b=99, c=2233;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl<<endl;

    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    // endl is a manipulator in C++ that can be used to put a linebreak in the output
    // setw is a manipulator in C++ that can be used to set a width for the variable value
}