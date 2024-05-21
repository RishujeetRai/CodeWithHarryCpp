#include<iostream>
using namespace std;
int main(){
    int a=4, b=5;
    // Arithmetic Operators
    cout<<"The value of a and b is: "<<a<<" and "<<b<<endl;
    cout<<"Following are the arithmetic operators in C++"<<endl;
    cout<<"The value of a+b is: "<<a+b<<endl;   //  endl for linebreak
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of b-- is: "<<b--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --b is: "<<--b<<endl;
    cout<<endl;

    // Assignment Operators
    // int c=8, d=10;
    // char e='f';

    // Comparison Operators
    cout<<"The value of a and b is: "<<a<<" and "<<b<<endl;
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<endl;

    // Logical Operators
    cout<<"The value of a and b is: "<<a<<" and "<<b<<endl;
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of (a && b) is: "<<(a && b)<<endl; // non-zero value taken as 1 by && logical operators
    cout<<"The value of (a || b) is: "<<(a || b)<<endl; // non-zero value taken as 1 by || logical operators
    cout<<"The value of !(a==b) is: "<<!(a==b)<<endl;
    cout<<endl;
}