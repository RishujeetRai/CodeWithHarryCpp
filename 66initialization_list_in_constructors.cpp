#include<iostream>
using namespace std;

/*
Syntax for initizalization list in constructors:
constuctor (argument-list) : initialization-section{
    assignment + other codes;
}
*/

class test{
    int a;
    int b;
    public:
        // test(int i, int j): a(i), b(j)          // valid    // value of a is i and b is j
        // test(int i, int j): a(i), b(i+j)        // valid    // value of a is i and b is i+j
        // test(int i, int j): a(i), b(2+j)        // valid    // value of a is i and b is 2+j
        // test(int i, int j): a(i), b(2*j)        // valid    // value of a is i and b is 2*j
        // test(int i, int j): a(i), b(i*j)        // valid    // value of a is i and b is i*j
        // test(int i, int j): a(i*j), b(i-j)      // valid    // value of a is i*j and b is i-j
        // test(int i, int j): a(i), b(a+j)        // valid    // value of a is i and b is a+j

        // test(int i, int j): b(j), a(b+j)     // not valid
        // garbage value for a: first declared first initialized    // a was declared before b
        // a will be initialized first, since b had not been initialized yet, it held garbage value
        // so b+j also has garbage value

        // test(int i, int j): b(a+i), a(j)     // valid
        // a will be initialized first, hence b will have proper value

        test(int i, int j): a(i), b(j)      // initialization list syntax
        // same as a = i and b = j in the body of this constructor
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    test t(3,4);
    return 0;
}