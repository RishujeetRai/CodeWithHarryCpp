#include<iostream>
using namespace std;
int main(){
    int a=4, *b=&a, **c=&b;     // **c is a double pointer: it points at a pointer
    cout<<a<<endl;      // will print the value of a
    cout<<&a<<endl;     // will print the address of a
    cout<<b<<endl;      // will print the address of a
    cout<<*b<<endl;     // will print the value of a

    cout<<&b<<endl;     // will print the address of pointer b
    cout<<c<<endl;      // will print the address of pointer b
    cout<<*c<<endl;     // will print the address of a
    cout<<**c<<endl;    // will print the value of a
    return 0;
}