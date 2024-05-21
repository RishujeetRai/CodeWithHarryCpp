#include<iostream>
using namespace std;
int main(){
    const int a = 4;    // a is now a read-only variable
    cout<<"The value of a was: "<<a<<endl;
    // a = 5;       // not allowed
    cout<<"The value of a is: "<<a<<endl;
}