#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){         // default constructor
            a = 0;
        }
        number(int x){      // parametrized constructor
            a = x;          // here we are setting the value of the object declared under class number
        }
        // if no copy constructor is found, compiler supplies a copy constructor of it's own
        number(number &object){ 
        // copy constructor: has same name as constructor/class & takes object reference as parameter
            a = object.a;   // we set the value of object declared via reference of the object passed as parameter
            cout<<"Copy constructor called!!!\n";
        }
        void display(){
            cout<<"The value is "<<a<<endl;
        }
};

int main(){
    number x, y, z(45);     // creating objects under class number and assigning them values via constructor
    x.display();
    y.display();
    z.display();

    number z1(z);       // creating another object, but assigning it value of another object via constructor
    // another obect is passsed as a parameter, so the copy constructor will be called
    // z1 = z.a
    z1.display();

    // number z1(z)     // would've still run even if we hadn't defined a copy constructor
    // c++ provides a copy constructor of it's own to the program
    // if we call a copy constructor, it will check if we have defined a copy constructor of our own
    // if not then it will call the copy constructor of it's own

    number z2;
    z2 = z;         // this is simple assignment operation
    // value of z2 will be that of z, but no copy constructor is called here
    // above is a valid syntax because both z1 and z are objects
    // constructors are only called automatically while declaring objects or when calling them by name
    z2.display();

    number z3 = z;  // copy constructor will be called here because, number z3 = z is same as number z3(z)
    // copy constructor will be called here
    // because we are initializing value of z3 as the object z during declaration
    z3.display();

    // number z4 = number(z);      // throws compiler error for some reason
    // z4.display();
    return 0;
}