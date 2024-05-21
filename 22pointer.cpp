#include<iostream>
using namespace std;
int main(){
    int a = 4;
    // pointer is a datatype that stores the address of another variable
    int *b = &a;
    // & --> addressof operator
    // * --> dereferencing operator
    cout<<a<<endl;      // will print the value of a
    cout<<&a<<endl;     // will print the address of a
    cout<<b<<endl;      // will print the address of a
    cout<<*b<<endl;     // will print the value of a
    return 0;
}