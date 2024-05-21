#include<iostream>
using namespace std;
/*
    Case1:
    class B: public A{
    // Order of execution of constructor -> first A() then B()
    };

    Case2:
    class A: public B, public C{
        // Order of execution of constructor -> B() then C() and A()
    };

    Case3:
    class A: public B, virtual public C{
        // Order of execution of constructor -> C() then B() and A()
    };
*/

class base1{
    int b1;
    public:
        base1(int i){       // constructor for base class base1
            b1 = i;
            cout<<"Contructor for base1 called."<<endl;
        }
        void print_base1(){
            cout<<"The value of base1 int is "<<b1<<endl;
        }
};
class base2{
    int b2;
    public:
        base2(int i){       // constructor for base class base2
            b2 = i;
            cout<<"Contructor for base2 called."<<endl;
        }
        void print_base2(){
            cout<<"The value of base2 int is "<<b2<<endl;
        }
};

class derived: public base1, public base2{
    int d1, d2;
    public:
        derived(int a, int b, int c, int d): base1(a), base2(b){       // derived class' constructor

        // base class' constructors can be invoked as shown above using derived class' constructor
        // base class' constructors base1(int) and base2(int) are getting called here

        // Constructors are not members, so they are not inherited by subclasses,
        // but the constructor of the superclass can be invoked from the subclass.
        
            d1 = c;
            d2 = d;
            cout<<"Contructor for derived class called."<<endl;
        }
        void print_derived(){
            cout<<"The value of d1 is "<<d1<<endl;
            cout<<"The value of d2 is "<<d2<<endl;
        }
};

int main(){
    derived d(3, 4, 5, 6);
    d.print_base1();
    d.print_base2();
    d.print_derived();
    return 0;
}

/*
NOTE:
derived class' constrcutor by default calls base class' default constructor

in case you made a parametrized constructor in base class, and didn't make a default one
then there will be no default constructors in the base class

as compiler only provides a default constructor when we don't define any constructors by ourselves

so in that case, derived class' constructor won't be able to call the default constructor of the base class
that will lead to compile-time error
so to avoid that compile-time error,
we call the parametrized constrcutors of the base class using the derived class' constructor

as shown in line 46

SUCH IS THE CONCEPT OF CONSTRUCTORS IN DERIVED CLASS
*/