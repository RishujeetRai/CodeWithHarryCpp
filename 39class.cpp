#include<iostream>
using namespace std;

class Employee{
    private: int a, b, c;
    public: int d, e;
    void setData(int a, int b, int c);      // mentioned under public, so these fns are accessible from outside
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
    }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;         // a, b and c will be recognized from class
    b = b1;
    c = c1;
}

int main(){
    Employee Harry;
    // Harry.a=34;      // Won't work as "a" is inaccessible
    Harry.setData(1,2,3);       // Use a function mentioned in the class to access a, b and c
    Harry.d=4;
    Harry.e=5;
    Harry.getData();
    return 0;
}