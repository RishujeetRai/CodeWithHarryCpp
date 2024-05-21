#include<iostream>
using namespace std;
class Employee{
    public:
        int id;
        int salaray = 34;
        Employee(){}                // default constructor
        Employee(int inputID){
            id = inputID;
        }
        void dispID(){
            cout<<"The employee ID is "<<id<<endl;
        }
};
/*
Note:
1. Default visibility mode is private.
2. Public visibility mode: public members of the base class becomes public members of the derived class
3. Private visibility mode: public members of the base class become private members of the derived class
4. Private members are never inherited
*/
class Programmer : Employee{        // Programmer is derived class and Employee is base class
    // id and salary are inherited privately from base class Employee
    public:
        Programmer(int inputID){    // constructors don't get inherited either (neither do destructors)
            id = inputID;           // id got inherited from the base class Employee privately
        }
        void dispID(){
        // this fn did get inherited but we had to make another to print id because the fn was inherited privately
            cout<<"The employee ID is "<<id<<endl;      // fn to print the privately inherited id
        }
};

int main(){
    Employee a1(22), a2(23);
    a1.dispID();
    a2.dispID();
    Programmer a3(24);
    a3.dispID();
    return 0;
}