#include<iostream>
using namespace std;
int c = 44;
int main(){
    int a, b;
    cout<<"Enter the value of int a: ";
    cin>>a;
    cout<<"Enter the value of int b: ";
    cin>>b;
    int c = a + b;
    cout<<"The value of int c is: "<<c<<endl;
    cout<<"The value of global int c is: "<<::c;    // :: scope resolution operator to get the global value
    // above line of code will throw an error if a global operator c is not declared
    return 0;
}